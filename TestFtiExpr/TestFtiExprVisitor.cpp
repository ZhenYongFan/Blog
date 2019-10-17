#include "TestFtiExprVisitor.h"

using namespace antlr4::tree;

antlrcpp::Any CTestFtiExprVisitor::visitContains_param(FtiExprParser::Contains_paramContext *pContent)
{
    antlrcpp::Any anyText;
    if (nullptr != pContent->contains_expr())
        anyText = visitContains_expr(pContent->contains_expr());
    if (nullptr != pContent->fti_optstring())
    {
        antlrcpp::Any anyFtiOpt = visitFti_optstring(pContent->fti_optstring());
        std::string strText = anyText.as<std::string>() + " : " + anyFtiOpt.as<std::string>();
        anyText = antlrcpp::Any(strText);
    }
    return anyText;
}

antlrcpp::Any CTestFtiExprVisitor::visitFti_optstring(FtiExprParser::Fti_optstringContext *pContent)
{
    antlrcpp::Any anyText = visitFti_opt(pContent->fti_opt());
    if (nullptr != pContent->fti_optstring())
    {
        antlrcpp::Any anyFtiOptStr = visitFti_optstring(pContent->fti_optstring());
        std::string strText = anyText.as<std::string>() + " & " + anyFtiOptStr.as<std::string>();
        anyText = antlrcpp::Any(strText);
    }
    return anyText;
}

antlrcpp::Any CTestFtiExprVisitor::visitFti_opt(FtiExprParser::Fti_optContext *pContent)
{
    TerminalNode *nodeID = pContent->ID();
    std::string strText = nodeID->getText();
    strText += " = " + visitString_value(pContent->string_value()).as<std::string>();
    return antlrcpp::Any(strText);
}

antlrcpp::Any CTestFtiExprVisitor::visitContains_expr(FtiExprParser::Contains_exprContext *pContent)
{
    antlrcpp::Any anyText;
    TerminalNode *pConstString = pContent->CONST_STRING();
    TerminalNode *pNumber = pContent->NUMBER();

    if (nullptr != pNumber)
        anyText = pConstString->getText() + " / " + pNumber->getText();
    else if (nullptr != pContent->contains_string())
        anyText = visitContains_string(pContent->contains_string());
    else if (nullptr != pContent->func_near_expr())
        anyText = visitFunc_near_expr(pContent->func_near_expr());
    else
    {
        std::string strText;
        std::vector<FtiExprParser::Contains_exprContext *> aExprs = pContent->contains_expr();
        if (1 == aExprs.size())
        {
            strText = "( " + visitContains_expr(aExprs[0]).as<std::string>() + " )";
        }
        else
        {
            strText = "( " + visitContains_expr(aExprs[0]).as<std::string>() + " )";
            if (nullptr != pContent->OPT_AND())
                strText += " & ";
            else if (nullptr != pContent->OPT_OR())
                strText += " | ";
            else if (nullptr != pContent->OPT_NOT())
                strText += " - ";
            else
                strText += " & ";
            strText += "( " + visitContains_expr(aExprs[1]).as<std::string>() + " )";
        }
        anyText = antlrcpp::Any(strText);
    }
    return anyText;
}

antlrcpp::Any CTestFtiExprVisitor::visitContains_string(FtiExprParser::Contains_stringContext *pContent)
{
    std::string strText ;
    TerminalNode *nodeHead = pContent->SENTENCE_HEAD();
    if (nullptr != nodeHead)
        strText += "^ ";

    strText += visitString_value(pContent->string_value()).as<std::string>();

    TerminalNode *nodeTail = pContent->SENTENCE_TAIL();
    if (nullptr != nodeTail)
        strText += " $";

    return antlrcpp::Any(strText);

}

antlrcpp::Any CTestFtiExprVisitor::visitString_value(FtiExprParser::String_valueContext *pContent)
{
    TerminalNode *nodeConstString = pContent->CONST_STRING();
    TerminalNode *nodeNumber = pContent->NUMBER();
    TerminalNode *nodeString = pContent->STRING();
    TerminalNode *nodeID = pContent->ID();


    std::string strText ;
    if (nullptr != nodeConstString)
        strText = nodeConstString->getText();
    else if (nullptr != nodeString)
        strText = nodeString->getText();
    else if (nullptr != nodeNumber)
        strText = nodeNumber->getText();
    else if (nullptr != nodeID)
        strText = nodeID->getText();
    return antlrcpp::Any(strText);
}

antlrcpp::Any CTestFtiExprVisitor::visitFunc_near_expr(FtiExprParser::Func_near_exprContext *pContent)
{
    std::string strText = "NEAR((";
    strText += visitNear_term_list(pContent->near_term_list()).as<std::string>();
    strText += ")," + pContent->NUMBER()->getText();
    if (nullptr != pContent->near_order())
        strText += visitNear_order(pContent->near_order()).as<std::string>();
    strText += ")";
    return antlrcpp::Any(strText);
}

antlrcpp::Any CTestFtiExprVisitor::visitNear_term_list(FtiExprParser::Near_term_listContext *pContent)
{
    std::string strText = visitNear_term(pContent->near_term()).as<std::string>();
    if (nullptr != pContent->near_term_list())
        strText += "," + visitNear_term_list(pContent->near_term_list()).as<std::string>();
    return antlrcpp::Any(strText);
}

antlrcpp::Any CTestFtiExprVisitor::visitNear_term(FtiExprParser::Near_termContext *pContent)
{
    antlrcpp::Any anyText;
    if (nullptr != pContent->contains_string())
        anyText = visitContains_string(pContent->contains_string());
    else if (nullptr != pContent->func_near_expr())
        anyText = visitFunc_near_expr(pContent->func_near_expr());
    return anyText;
}

antlrcpp::Any CTestFtiExprVisitor::visitNear_order(FtiExprParser::Near_orderContext *pContent)
{
    std::string strText;
    if (nullptr != pContent->NUMBER())
        strText = "," + pContent->NUMBER()->getText();
    return antlrcpp::Any(strText);
}
