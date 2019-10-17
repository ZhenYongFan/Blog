



// Generated from FtiExpr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "FtiExprParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by FtiExprParser.
 */
class  FtiExprVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by FtiExprParser.
   */
    virtual antlrcpp::Any visitContains_param(FtiExprParser::Contains_paramContext *context) = 0;

    virtual antlrcpp::Any visitFti_optstring(FtiExprParser::Fti_optstringContext *context) = 0;

    virtual antlrcpp::Any visitFti_opt(FtiExprParser::Fti_optContext *context) = 0;

    virtual antlrcpp::Any visitContains_expr(FtiExprParser::Contains_exprContext *context) = 0;

    virtual antlrcpp::Any visitContains_string(FtiExprParser::Contains_stringContext *context) = 0;

    virtual antlrcpp::Any visitString_value(FtiExprParser::String_valueContext *context) = 0;

    virtual antlrcpp::Any visitFunc_near_expr(FtiExprParser::Func_near_exprContext *context) = 0;

    virtual antlrcpp::Any visitNear_term_list(FtiExprParser::Near_term_listContext *context) = 0;

    virtual antlrcpp::Any visitNear_term(FtiExprParser::Near_termContext *context) = 0;

    virtual antlrcpp::Any visitNear_order(FtiExprParser::Near_orderContext *context) = 0;


};

