#include "stdafx.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#include "TestFtiExprVisitorFixture.h"


CPPUNIT_TEST_SUITE_REGISTRATION(CTestFtiExprVisitorFixture);

CTestFtiExprVisitorFixture::CTestFtiExprVisitorFixture()
{
}

CTestFtiExprVisitorFixture::~CTestFtiExprVisitorFixture()
{
}

void CTestFtiExprVisitorFixture::setUp(void)
{
}

void CTestFtiExprVisitorFixture::tearDown(void)
{

}

void CTestFtiExprVisitorFixture::TestParseOk(std::string strExpr, std::string strExpected)
{
    std::string strOutput;
    ParseString(strExpr, strOutput);
    CPPUNIT_ASSERT_EQUAL(strExpected, strOutput);
}

void CTestFtiExprVisitorFixture::TestParseFail(std::string strExpr, std::string strExpected)
{
    std::string strOutput;
    ParseString(strExpr, strOutput);
    CPPUNIT_ASSERT_EQUAL(strExpected, strOutput);
}

void CTestFtiExprVisitorFixture::TestParsePass(void)
{
    TestParseOk("tianjin", "tianjin");
    TestParseOk("中国", "中国");
    TestParseOk("tianjin", "tianjin");
    TestParseOk("12345", "12345");
    TestParseOk("\"tianjin\"", "\"tianjin\"");

    TestParseOk("^tianjin", "^ tianjin");
    TestParseOk("^tianjin$", "^ tianjin $");
    TestParseOk("tianjin$", "tianjin $");

    TestParseOk("\"tianjin beijing\"/ 12", "\"tianjin beijing\" / 12");

    TestParseOk("tianjin   beijing", "( tianjin ) & ( beijing )");
    TestParseOk("tianjin & beijing", "( tianjin ) & ( beijing )");
    TestParseOk("tianjin | beijing", "( tianjin ) | ( beijing )");
    TestParseOk("tianjin - beijing", "( tianjin ) - ( beijing )");

    TestParseOk("tianjin  beijing | shangxi hebei", "( ( tianjin ) & ( beijing ) ) | ( ( shangxi ) & ( hebei ) )");
    TestParseOk("(tianjin  beijing) | (shangxi hebei)", "( ( ( tianjin ) & ( beijing ) ) ) | ( ( ( shangxi ) & ( hebei ) ) )");

    TestParseOk("NEAR((tianjin , beijing),10)", "NEAR((tianjin,beijing),10)");
    TestParseOk("NEAR((tianjin,beijing),10,1)", "NEAR((tianjin,beijing),10,1)");
}

void CTestFtiExprVisitorFixture::TestParseNoPass(void)
{
    TestParseFail("", "Line: 1 Col: 0 Msg:mismatched input '<EOF>' expecting {'(', CONST_STRING, NEAR, '^', NUMBER, ID, STRING}");
}

void CTestFtiExprVisitorFixture::TestFtiOpt(void)
{
    TestParseOk("NEAR((tianjin,beijing),10,1) : rank = wordcount", "NEAR((tianjin,beijing),10,1) : rank = wordcount");
    TestParseOk("NEAR((tianjin,beijing),10,1) : rank = wordcount&mode=fast", "NEAR((tianjin,beijing),10,1) : rank = wordcount & mode = fast");
    TestParseOk("NEAR((12tianjin,beijing),10,1) : rank = wordcount", "NEAR((12tianjin,beijing),10,1) : rank = wordcount");
    TestParseFail("NEAR((tianjin,beijing),10,1) : 1rank = wordcount", "Line: 1 Col: 31 Msg:mismatched input '1rank' expecting ID");
}

#include "antlr4-runtime.h"
#include "antlr4/FtiExprLexer.h"
#include "antlr4/FtiExprParser.h"
#include "TestFtiExprVisitor.h"
#include "FtiExprErrorListener.h"
using namespace antlr4;

bool CTestFtiExprVisitorFixture::ParseString(const std::string &strExpr, std::string &strOutput)
{
    bool bParse = false;
    ANTLRInputStream input(strExpr);
    FtiExprLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    FtiExprParser parser(&tokens);
    parser.removeErrorListeners();
    CFtiExprErrorListener listenerError;
    parser.addErrorListener(&listenerError);
    FtiExprParser::Contains_paramContext *pParamContext = parser.contains_param();
    if(listenerError.m_strErrMsg.empty())
    {
        CTestFtiExprVisitor visitor;
        antlrcpp::Any strExpr = visitor.visit(pParamContext);
        strOutput = strExpr.as<std::string>();
        bParse = true;
    }
    else
    {
        char cLine[32],cCol[32];
        snprintf(cLine, 31, "%d", listenerError.m_nLine);
        snprintf(cCol, 31, "%d", listenerError.m_nPositionInLine);
        strOutput = "Line: " + std::string(cLine) + " Col: " + std::string(cCol) + " Msg:" + listenerError.m_strErrMsg;
    }
    return bParse;
}