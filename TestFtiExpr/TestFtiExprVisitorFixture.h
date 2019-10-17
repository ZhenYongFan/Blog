#pragma once
#include <cppunit/extensions/HelperMacros.h>

class CTestFtiExprVisitorFixture : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(CTestFtiExprVisitorFixture);

    CPPUNIT_TEST(TestParsePass);
    CPPUNIT_TEST(TestFtiOpt);
    CPPUNIT_TEST(TestParseNoPass);


    CPPUNIT_TEST_SUITE_END();
public:
    CTestFtiExprVisitorFixture();

    ~CTestFtiExprVisitorFixture();

    void setUp(void);

    void tearDown(void);

    void TestParsePass(void);
    void TestFtiOpt(void);
    void TestParseNoPass(void);
protected:
    void TestParseOk(std::string strExpr, std::string strExpected);

    void TestParseFail(std::string strExpr, std::string strExpected);

    bool ParseString(const std::string &strExpr, std::string &strOutput);

};

