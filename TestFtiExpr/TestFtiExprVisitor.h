#pragma once
#include "antlr4/FtiExprVisitor.h"

class CTestFtiExprVisitor : public FtiExprVisitor
{
public:

  /**
   * Visit parse trees produced by FtiExprParser.
   */
    virtual antlrcpp::Any visitContains_param(FtiExprParser::Contains_paramContext *pContent);

    virtual antlrcpp::Any visitFti_optstring(FtiExprParser::Fti_optstringContext *pContent);

    virtual antlrcpp::Any visitFti_opt(FtiExprParser::Fti_optContext *pContent);

    virtual antlrcpp::Any visitContains_expr(FtiExprParser::Contains_exprContext *pContent);

    virtual antlrcpp::Any visitContains_string(FtiExprParser::Contains_stringContext *pContent);

    virtual antlrcpp::Any visitString_value(FtiExprParser::String_valueContext *pContent);

    virtual antlrcpp::Any visitFunc_near_expr(FtiExprParser::Func_near_exprContext *pContent);

    virtual antlrcpp::Any visitNear_term_list(FtiExprParser::Near_term_listContext *pContent);

    virtual antlrcpp::Any visitNear_term(FtiExprParser::Near_termContext *pContent);

    virtual antlrcpp::Any visitNear_order(FtiExprParser::Near_orderContext *pContent);

};

