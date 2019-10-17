



// Generated from FtiExpr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  FtiExprParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, CONST_STRING = 7, 
    NEAR = 8, SENTENCE_HEAD = 9, SENTENCE_TAIL = 10, OPT_AND = 11, OPT_OR = 12, 
    OPT_NOT = 13, NUMBER = 14, ID = 15, STRING = 16, WS = 17
  };

  enum {
    RuleContains_param = 0, RuleFti_optstring = 1, RuleFti_opt = 2, RuleContains_expr = 3, 
    RuleContains_string = 4, RuleString_value = 5, RuleFunc_near_expr = 6, 
    RuleNear_term_list = 7, RuleNear_term = 8, RuleNear_order = 9
  };

  FtiExprParser(antlr4::TokenStream *input);
  ~FtiExprParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class Contains_paramContext;
  class Fti_optstringContext;
  class Fti_optContext;
  class Contains_exprContext;
  class Contains_stringContext;
  class String_valueContext;
  class Func_near_exprContext;
  class Near_term_listContext;
  class Near_termContext;
  class Near_orderContext; 

  class  Contains_paramContext : public antlr4::ParserRuleContext {
  public:
    Contains_paramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Contains_exprContext *contains_expr();
    Fti_optstringContext *fti_optstring();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Contains_paramContext* contains_param();

  class  Fti_optstringContext : public antlr4::ParserRuleContext {
  public:
    Fti_optstringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fti_optContext *fti_opt();
    antlr4::tree::TerminalNode *OPT_AND();
    Fti_optstringContext *fti_optstring();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fti_optstringContext* fti_optstring();

  class  Fti_optContext : public antlr4::ParserRuleContext {
  public:
    Fti_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    String_valueContext *string_value();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fti_optContext* fti_opt();

  class  Contains_exprContext : public antlr4::ParserRuleContext {
  public:
    Contains_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Contains_stringContext *contains_string();
    antlr4::tree::TerminalNode *CONST_STRING();
    antlr4::tree::TerminalNode *NUMBER();
    Func_near_exprContext *func_near_expr();
    std::vector<Contains_exprContext *> contains_expr();
    Contains_exprContext* contains_expr(size_t i);
    antlr4::tree::TerminalNode *OPT_AND();
    antlr4::tree::TerminalNode *OPT_OR();
    antlr4::tree::TerminalNode *OPT_NOT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Contains_exprContext* contains_expr();
  Contains_exprContext* contains_expr(int precedence);
  class  Contains_stringContext : public antlr4::ParserRuleContext {
  public:
    Contains_stringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    String_valueContext *string_value();
    antlr4::tree::TerminalNode *SENTENCE_HEAD();
    antlr4::tree::TerminalNode *SENTENCE_TAIL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Contains_stringContext* contains_string();

  class  String_valueContext : public antlr4::ParserRuleContext {
  public:
    String_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *CONST_STRING();
    antlr4::tree::TerminalNode *NUMBER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  String_valueContext* string_value();

  class  Func_near_exprContext : public antlr4::ParserRuleContext {
  public:
    Func_near_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEAR();
    Near_term_listContext *near_term_list();
    antlr4::tree::TerminalNode *NUMBER();
    Near_orderContext *near_order();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_near_exprContext* func_near_expr();

  class  Near_term_listContext : public antlr4::ParserRuleContext {
  public:
    Near_term_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Near_termContext *near_term();
    Near_term_listContext *near_term_list();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Near_term_listContext* near_term_list();

  class  Near_termContext : public antlr4::ParserRuleContext {
  public:
    Near_termContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Func_near_exprContext *func_near_expr();
    Contains_stringContext *contains_string();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Near_termContext* near_term();

  class  Near_orderContext : public antlr4::ParserRuleContext {
  public:
    Near_orderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Near_orderContext* near_order();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool contains_exprSempred(Contains_exprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

