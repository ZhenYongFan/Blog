



// Generated from FtiExpr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "FtiExprVisitor.h"


/**
 * This class provides an empty implementation of FtiExprVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  FtiExprBaseVisitor : public FtiExprVisitor {
public:

  virtual antlrcpp::Any visitContains_param(FtiExprParser::Contains_paramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFti_optstring(FtiExprParser::Fti_optstringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFti_opt(FtiExprParser::Fti_optContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContains_expr(FtiExprParser::Contains_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContains_string(FtiExprParser::Contains_stringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString_value(FtiExprParser::String_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_near_expr(FtiExprParser::Func_near_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNear_term_list(FtiExprParser::Near_term_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNear_term(FtiExprParser::Near_termContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNear_order(FtiExprParser::Near_orderContext *ctx) override {
    return visitChildren(ctx);
  }


};

