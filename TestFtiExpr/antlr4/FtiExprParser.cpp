



// Generated from FtiExpr.g4 by ANTLR 4.7.2


#include "FtiExprVisitor.h"

#include "FtiExprParser.h"


using namespace antlrcpp;
using namespace antlr4;

FtiExprParser::FtiExprParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

FtiExprParser::~FtiExprParser() {
  delete _interpreter;
}

std::string FtiExprParser::getGrammarFileName() const {
  return "FtiExpr.g4";
}

const std::vector<std::string>& FtiExprParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& FtiExprParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- Contains_paramContext ------------------------------------------------------------------

FtiExprParser::Contains_paramContext::Contains_paramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FtiExprParser::Contains_exprContext* FtiExprParser::Contains_paramContext::contains_expr() {
  return getRuleContext<FtiExprParser::Contains_exprContext>(0);
}

FtiExprParser::Fti_optstringContext* FtiExprParser::Contains_paramContext::fti_optstring() {
  return getRuleContext<FtiExprParser::Fti_optstringContext>(0);
}


size_t FtiExprParser::Contains_paramContext::getRuleIndex() const {
  return FtiExprParser::RuleContains_param;
}


antlrcpp::Any FtiExprParser::Contains_paramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FtiExprVisitor*>(visitor))
    return parserVisitor->visitContains_param(this);
  else
    return visitor->visitChildren(this);
}

FtiExprParser::Contains_paramContext* FtiExprParser::contains_param() {
  Contains_paramContext *_localctx = _tracker.createInstance<Contains_paramContext>(_ctx, getState());
  enterRule(_localctx, 0, FtiExprParser::RuleContains_param);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(25);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(20);
      contains_expr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(21);
      contains_expr(0);
      setState(22);
      match(FtiExprParser::T__0);
      setState(23);
      fti_optstring();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fti_optstringContext ------------------------------------------------------------------

FtiExprParser::Fti_optstringContext::Fti_optstringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FtiExprParser::Fti_optContext* FtiExprParser::Fti_optstringContext::fti_opt() {
  return getRuleContext<FtiExprParser::Fti_optContext>(0);
}

tree::TerminalNode* FtiExprParser::Fti_optstringContext::OPT_AND() {
  return getToken(FtiExprParser::OPT_AND, 0);
}

FtiExprParser::Fti_optstringContext* FtiExprParser::Fti_optstringContext::fti_optstring() {
  return getRuleContext<FtiExprParser::Fti_optstringContext>(0);
}


size_t FtiExprParser::Fti_optstringContext::getRuleIndex() const {
  return FtiExprParser::RuleFti_optstring;
}


antlrcpp::Any FtiExprParser::Fti_optstringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FtiExprVisitor*>(visitor))
    return parserVisitor->visitFti_optstring(this);
  else
    return visitor->visitChildren(this);
}

FtiExprParser::Fti_optstringContext* FtiExprParser::fti_optstring() {
  Fti_optstringContext *_localctx = _tracker.createInstance<Fti_optstringContext>(_ctx, getState());
  enterRule(_localctx, 2, FtiExprParser::RuleFti_optstring);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(32);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(27);
      fti_opt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(28);
      fti_opt();
      setState(29);
      match(FtiExprParser::OPT_AND);
      setState(30);
      fti_optstring();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fti_optContext ------------------------------------------------------------------

FtiExprParser::Fti_optContext::Fti_optContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FtiExprParser::Fti_optContext::ID() {
  return getToken(FtiExprParser::ID, 0);
}

FtiExprParser::String_valueContext* FtiExprParser::Fti_optContext::string_value() {
  return getRuleContext<FtiExprParser::String_valueContext>(0);
}


size_t FtiExprParser::Fti_optContext::getRuleIndex() const {
  return FtiExprParser::RuleFti_opt;
}


antlrcpp::Any FtiExprParser::Fti_optContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FtiExprVisitor*>(visitor))
    return parserVisitor->visitFti_opt(this);
  else
    return visitor->visitChildren(this);
}

FtiExprParser::Fti_optContext* FtiExprParser::fti_opt() {
  Fti_optContext *_localctx = _tracker.createInstance<Fti_optContext>(_ctx, getState());
  enterRule(_localctx, 4, FtiExprParser::RuleFti_opt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34);
    match(FtiExprParser::ID);
    setState(35);
    match(FtiExprParser::T__1);
    setState(36);
    string_value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Contains_exprContext ------------------------------------------------------------------

FtiExprParser::Contains_exprContext::Contains_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FtiExprParser::Contains_stringContext* FtiExprParser::Contains_exprContext::contains_string() {
  return getRuleContext<FtiExprParser::Contains_stringContext>(0);
}

tree::TerminalNode* FtiExprParser::Contains_exprContext::CONST_STRING() {
  return getToken(FtiExprParser::CONST_STRING, 0);
}

tree::TerminalNode* FtiExprParser::Contains_exprContext::NUMBER() {
  return getToken(FtiExprParser::NUMBER, 0);
}

FtiExprParser::Func_near_exprContext* FtiExprParser::Contains_exprContext::func_near_expr() {
  return getRuleContext<FtiExprParser::Func_near_exprContext>(0);
}

std::vector<FtiExprParser::Contains_exprContext *> FtiExprParser::Contains_exprContext::contains_expr() {
  return getRuleContexts<FtiExprParser::Contains_exprContext>();
}

FtiExprParser::Contains_exprContext* FtiExprParser::Contains_exprContext::contains_expr(size_t i) {
  return getRuleContext<FtiExprParser::Contains_exprContext>(i);
}

tree::TerminalNode* FtiExprParser::Contains_exprContext::OPT_AND() {
  return getToken(FtiExprParser::OPT_AND, 0);
}

tree::TerminalNode* FtiExprParser::Contains_exprContext::OPT_OR() {
  return getToken(FtiExprParser::OPT_OR, 0);
}

tree::TerminalNode* FtiExprParser::Contains_exprContext::OPT_NOT() {
  return getToken(FtiExprParser::OPT_NOT, 0);
}


size_t FtiExprParser::Contains_exprContext::getRuleIndex() const {
  return FtiExprParser::RuleContains_expr;
}


antlrcpp::Any FtiExprParser::Contains_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FtiExprVisitor*>(visitor))
    return parserVisitor->visitContains_expr(this);
  else
    return visitor->visitChildren(this);
}


FtiExprParser::Contains_exprContext* FtiExprParser::contains_expr() {
   return contains_expr(0);
}

FtiExprParser::Contains_exprContext* FtiExprParser::contains_expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  FtiExprParser::Contains_exprContext *_localctx = _tracker.createInstance<Contains_exprContext>(_ctx, parentState);
  FtiExprParser::Contains_exprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, FtiExprParser::RuleContains_expr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(48);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(39);
      contains_string();
      break;
    }

    case 2: {
      setState(40);
      match(FtiExprParser::CONST_STRING);
      setState(41);
      match(FtiExprParser::T__2);
      setState(42);
      match(FtiExprParser::NUMBER);
      break;
    }

    case 3: {
      setState(43);
      func_near_expr();
      break;
    }

    case 4: {
      setState(44);
      match(FtiExprParser::T__3);
      setState(45);
      contains_expr(0);
      setState(46);
      match(FtiExprParser::T__4);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(63);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(61);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Contains_exprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleContains_expr);
          setState(50);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(51);
          contains_expr(5);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Contains_exprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleContains_expr);
          setState(52);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(53);
          match(FtiExprParser::OPT_AND);
          setState(54);
          contains_expr(4);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<Contains_exprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleContains_expr);
          setState(55);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(56);
          match(FtiExprParser::OPT_OR);
          setState(57);
          contains_expr(3);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<Contains_exprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleContains_expr);
          setState(58);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(59);
          match(FtiExprParser::OPT_NOT);
          setState(60);
          contains_expr(2);
          break;
        }

        } 
      }
      setState(65);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Contains_stringContext ------------------------------------------------------------------

FtiExprParser::Contains_stringContext::Contains_stringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FtiExprParser::String_valueContext* FtiExprParser::Contains_stringContext::string_value() {
  return getRuleContext<FtiExprParser::String_valueContext>(0);
}

tree::TerminalNode* FtiExprParser::Contains_stringContext::SENTENCE_HEAD() {
  return getToken(FtiExprParser::SENTENCE_HEAD, 0);
}

tree::TerminalNode* FtiExprParser::Contains_stringContext::SENTENCE_TAIL() {
  return getToken(FtiExprParser::SENTENCE_TAIL, 0);
}


size_t FtiExprParser::Contains_stringContext::getRuleIndex() const {
  return FtiExprParser::RuleContains_string;
}


antlrcpp::Any FtiExprParser::Contains_stringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FtiExprVisitor*>(visitor))
    return parserVisitor->visitContains_string(this);
  else
    return visitor->visitChildren(this);
}

FtiExprParser::Contains_stringContext* FtiExprParser::contains_string() {
  Contains_stringContext *_localctx = _tracker.createInstance<Contains_stringContext>(_ctx, getState());
  enterRule(_localctx, 8, FtiExprParser::RuleContains_string);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(76);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(66);
      string_value();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(67);
      match(FtiExprParser::SENTENCE_HEAD);
      setState(68);
      string_value();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(69);
      match(FtiExprParser::SENTENCE_HEAD);
      setState(70);
      string_value();
      setState(71);
      match(FtiExprParser::SENTENCE_TAIL);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(73);
      string_value();
      setState(74);
      match(FtiExprParser::SENTENCE_TAIL);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- String_valueContext ------------------------------------------------------------------

FtiExprParser::String_valueContext::String_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FtiExprParser::String_valueContext::ID() {
  return getToken(FtiExprParser::ID, 0);
}

tree::TerminalNode* FtiExprParser::String_valueContext::STRING() {
  return getToken(FtiExprParser::STRING, 0);
}

tree::TerminalNode* FtiExprParser::String_valueContext::CONST_STRING() {
  return getToken(FtiExprParser::CONST_STRING, 0);
}

tree::TerminalNode* FtiExprParser::String_valueContext::NUMBER() {
  return getToken(FtiExprParser::NUMBER, 0);
}


size_t FtiExprParser::String_valueContext::getRuleIndex() const {
  return FtiExprParser::RuleString_value;
}


antlrcpp::Any FtiExprParser::String_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FtiExprVisitor*>(visitor))
    return parserVisitor->visitString_value(this);
  else
    return visitor->visitChildren(this);
}

FtiExprParser::String_valueContext* FtiExprParser::string_value() {
  String_valueContext *_localctx = _tracker.createInstance<String_valueContext>(_ctx, getState());
  enterRule(_localctx, 10, FtiExprParser::RuleString_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << FtiExprParser::CONST_STRING)
      | (1ULL << FtiExprParser::NUMBER)
      | (1ULL << FtiExprParser::ID)
      | (1ULL << FtiExprParser::STRING))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_near_exprContext ------------------------------------------------------------------

FtiExprParser::Func_near_exprContext::Func_near_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FtiExprParser::Func_near_exprContext::NEAR() {
  return getToken(FtiExprParser::NEAR, 0);
}

FtiExprParser::Near_term_listContext* FtiExprParser::Func_near_exprContext::near_term_list() {
  return getRuleContext<FtiExprParser::Near_term_listContext>(0);
}

tree::TerminalNode* FtiExprParser::Func_near_exprContext::NUMBER() {
  return getToken(FtiExprParser::NUMBER, 0);
}

FtiExprParser::Near_orderContext* FtiExprParser::Func_near_exprContext::near_order() {
  return getRuleContext<FtiExprParser::Near_orderContext>(0);
}


size_t FtiExprParser::Func_near_exprContext::getRuleIndex() const {
  return FtiExprParser::RuleFunc_near_expr;
}


antlrcpp::Any FtiExprParser::Func_near_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FtiExprVisitor*>(visitor))
    return parserVisitor->visitFunc_near_expr(this);
  else
    return visitor->visitChildren(this);
}

FtiExprParser::Func_near_exprContext* FtiExprParser::func_near_expr() {
  Func_near_exprContext *_localctx = _tracker.createInstance<Func_near_exprContext>(_ctx, getState());
  enterRule(_localctx, 12, FtiExprParser::RuleFunc_near_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
    match(FtiExprParser::NEAR);
    setState(81);
    match(FtiExprParser::T__3);
    setState(82);
    match(FtiExprParser::T__3);
    setState(83);
    near_term_list();
    setState(84);
    match(FtiExprParser::T__4);
    setState(85);
    match(FtiExprParser::T__5);
    setState(86);
    match(FtiExprParser::NUMBER);
    setState(87);
    near_order();
    setState(88);
    match(FtiExprParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Near_term_listContext ------------------------------------------------------------------

FtiExprParser::Near_term_listContext::Near_term_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FtiExprParser::Near_termContext* FtiExprParser::Near_term_listContext::near_term() {
  return getRuleContext<FtiExprParser::Near_termContext>(0);
}

FtiExprParser::Near_term_listContext* FtiExprParser::Near_term_listContext::near_term_list() {
  return getRuleContext<FtiExprParser::Near_term_listContext>(0);
}


size_t FtiExprParser::Near_term_listContext::getRuleIndex() const {
  return FtiExprParser::RuleNear_term_list;
}


antlrcpp::Any FtiExprParser::Near_term_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FtiExprVisitor*>(visitor))
    return parserVisitor->visitNear_term_list(this);
  else
    return visitor->visitChildren(this);
}

FtiExprParser::Near_term_listContext* FtiExprParser::near_term_list() {
  Near_term_listContext *_localctx = _tracker.createInstance<Near_term_listContext>(_ctx, getState());
  enterRule(_localctx, 14, FtiExprParser::RuleNear_term_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(95);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(90);
      near_term();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(91);
      near_term();
      setState(92);
      match(FtiExprParser::T__5);
      setState(93);
      near_term_list();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Near_termContext ------------------------------------------------------------------

FtiExprParser::Near_termContext::Near_termContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FtiExprParser::Func_near_exprContext* FtiExprParser::Near_termContext::func_near_expr() {
  return getRuleContext<FtiExprParser::Func_near_exprContext>(0);
}

FtiExprParser::Contains_stringContext* FtiExprParser::Near_termContext::contains_string() {
  return getRuleContext<FtiExprParser::Contains_stringContext>(0);
}


size_t FtiExprParser::Near_termContext::getRuleIndex() const {
  return FtiExprParser::RuleNear_term;
}


antlrcpp::Any FtiExprParser::Near_termContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FtiExprVisitor*>(visitor))
    return parserVisitor->visitNear_term(this);
  else
    return visitor->visitChildren(this);
}

FtiExprParser::Near_termContext* FtiExprParser::near_term() {
  Near_termContext *_localctx = _tracker.createInstance<Near_termContext>(_ctx, getState());
  enterRule(_localctx, 16, FtiExprParser::RuleNear_term);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(99);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FtiExprParser::NEAR: {
        enterOuterAlt(_localctx, 1);
        setState(97);
        func_near_expr();
        break;
      }

      case FtiExprParser::CONST_STRING:
      case FtiExprParser::SENTENCE_HEAD:
      case FtiExprParser::NUMBER:
      case FtiExprParser::ID:
      case FtiExprParser::STRING: {
        enterOuterAlt(_localctx, 2);
        setState(98);
        contains_string();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Near_orderContext ------------------------------------------------------------------

FtiExprParser::Near_orderContext::Near_orderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FtiExprParser::Near_orderContext::NUMBER() {
  return getToken(FtiExprParser::NUMBER, 0);
}


size_t FtiExprParser::Near_orderContext::getRuleIndex() const {
  return FtiExprParser::RuleNear_order;
}


antlrcpp::Any FtiExprParser::Near_orderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FtiExprVisitor*>(visitor))
    return parserVisitor->visitNear_order(this);
  else
    return visitor->visitChildren(this);
}

FtiExprParser::Near_orderContext* FtiExprParser::near_order() {
  Near_orderContext *_localctx = _tracker.createInstance<Near_orderContext>(_ctx, getState());
  enterRule(_localctx, 18, FtiExprParser::RuleNear_order);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(104);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FtiExprParser::T__4: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case FtiExprParser::T__5: {
        enterOuterAlt(_localctx, 2);
        setState(102);
        match(FtiExprParser::T__5);
        setState(103);
        match(FtiExprParser::NUMBER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool FtiExprParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 3: return contains_exprSempred(dynamic_cast<Contains_exprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool FtiExprParser::contains_exprSempred(Contains_exprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);
    case 2: return precpred(_ctx, 2);
    case 3: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> FtiExprParser::_decisionToDFA;
atn::PredictionContextCache FtiExprParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN FtiExprParser::_atn;
std::vector<uint16_t> FtiExprParser::_serializedATN;

std::vector<std::string> FtiExprParser::_ruleNames = {
  "contains_param", "fti_optstring", "fti_opt", "contains_expr", "contains_string", 
  "string_value", "func_near_expr", "near_term_list", "near_term", "near_order"
};

std::vector<std::string> FtiExprParser::_literalNames = {
  "", "':'", "'='", "'/'", "'('", "')'", "','", "", "", "'^'", "'$'", "'&'", 
  "'|'", "'-'"
};

std::vector<std::string> FtiExprParser::_symbolicNames = {
  "", "", "", "", "", "", "", "CONST_STRING", "NEAR", "SENTENCE_HEAD", "SENTENCE_TAIL", 
  "OPT_AND", "OPT_OR", "OPT_NOT", "NUMBER", "ID", "STRING", "WS"
};

dfa::Vocabulary FtiExprParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> FtiExprParser::_tokenNames;

FtiExprParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x13, 0x6d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x1c, 
    0xa, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 
    0x23, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x33, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x7, 0x5, 0x40, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x43, 0xb, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x4f, 0xa, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x5, 0x9, 0x62, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 
    0x66, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x6b, 0xa, 0xb, 
    0x3, 0xb, 0x2, 0x3, 0x8, 0xc, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x2, 0x3, 0x4, 0x2, 0x9, 0x9, 0x10, 0x12, 0x2, 0x71, 0x2, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0x4, 0x22, 0x3, 0x2, 0x2, 0x2, 0x6, 0x24, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x32, 0x3, 0x2, 0x2, 0x2, 0xa, 0x4e, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x50, 0x3, 0x2, 0x2, 0x2, 0xe, 0x52, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x61, 0x3, 0x2, 0x2, 0x2, 0x12, 0x65, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x6a, 0x3, 0x2, 0x2, 0x2, 0x16, 0x1c, 0x5, 0x8, 0x5, 0x2, 0x17, 0x18, 
    0x5, 0x8, 0x5, 0x2, 0x18, 0x19, 0x7, 0x3, 0x2, 0x2, 0x19, 0x1a, 0x5, 
    0x4, 0x3, 0x2, 0x1a, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x16, 0x3, 0x2, 
    0x2, 0x2, 0x1b, 0x17, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x1d, 0x23, 0x5, 0x6, 0x4, 0x2, 0x1e, 0x1f, 0x5, 0x6, 0x4, 0x2, 
    0x1f, 0x20, 0x7, 0xd, 0x2, 0x2, 0x20, 0x21, 0x5, 0x4, 0x3, 0x2, 0x21, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x22, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x22, 0x1e, 
    0x3, 0x2, 0x2, 0x2, 0x23, 0x5, 0x3, 0x2, 0x2, 0x2, 0x24, 0x25, 0x7, 
    0x11, 0x2, 0x2, 0x25, 0x26, 0x7, 0x4, 0x2, 0x2, 0x26, 0x27, 0x5, 0xc, 
    0x7, 0x2, 0x27, 0x7, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x8, 0x5, 0x1, 
    0x2, 0x29, 0x33, 0x5, 0xa, 0x6, 0x2, 0x2a, 0x2b, 0x7, 0x9, 0x2, 0x2, 
    0x2b, 0x2c, 0x7, 0x5, 0x2, 0x2, 0x2c, 0x33, 0x7, 0x10, 0x2, 0x2, 0x2d, 
    0x33, 0x5, 0xe, 0x8, 0x2, 0x2e, 0x2f, 0x7, 0x6, 0x2, 0x2, 0x2f, 0x30, 
    0x5, 0x8, 0x5, 0x2, 0x30, 0x31, 0x7, 0x7, 0x2, 0x2, 0x31, 0x33, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0x28, 0x3, 0x2, 0x2, 0x2, 0x32, 0x2a, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x32, 0x2e, 0x3, 0x2, 0x2, 
    0x2, 0x33, 0x41, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0xc, 0x6, 0x2, 0x2, 
    0x35, 0x40, 0x5, 0x8, 0x5, 0x7, 0x36, 0x37, 0xc, 0x5, 0x2, 0x2, 0x37, 
    0x38, 0x7, 0xd, 0x2, 0x2, 0x38, 0x40, 0x5, 0x8, 0x5, 0x6, 0x39, 0x3a, 
    0xc, 0x4, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0xe, 0x2, 0x2, 0x3b, 0x40, 0x5, 
    0x8, 0x5, 0x5, 0x3c, 0x3d, 0xc, 0x3, 0x2, 0x2, 0x3d, 0x3e, 0x7, 0xf, 
    0x2, 0x2, 0x3e, 0x40, 0x5, 0x8, 0x5, 0x4, 0x3f, 0x34, 0x3, 0x2, 0x2, 
    0x2, 0x3f, 0x36, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0x3f, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x40, 0x43, 0x3, 0x2, 0x2, 0x2, 0x41, 
    0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x3, 0x2, 0x2, 0x2, 0x42, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x43, 0x41, 0x3, 0x2, 0x2, 0x2, 0x44, 0x4f, 0x5, 
    0xc, 0x7, 0x2, 0x45, 0x46, 0x7, 0xb, 0x2, 0x2, 0x46, 0x4f, 0x5, 0xc, 
    0x7, 0x2, 0x47, 0x48, 0x7, 0xb, 0x2, 0x2, 0x48, 0x49, 0x5, 0xc, 0x7, 
    0x2, 0x49, 0x4a, 0x7, 0xc, 0x2, 0x2, 0x4a, 0x4f, 0x3, 0x2, 0x2, 0x2, 
    0x4b, 0x4c, 0x5, 0xc, 0x7, 0x2, 0x4c, 0x4d, 0x7, 0xc, 0x2, 0x2, 0x4d, 
    0x4f, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x44, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x45, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x47, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4b, 0x3, 
    0x2, 0x2, 0x2, 0x4f, 0xb, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x9, 0x2, 
    0x2, 0x2, 0x51, 0xd, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x7, 0xa, 0x2, 
    0x2, 0x53, 0x54, 0x7, 0x6, 0x2, 0x2, 0x54, 0x55, 0x7, 0x6, 0x2, 0x2, 
    0x55, 0x56, 0x5, 0x10, 0x9, 0x2, 0x56, 0x57, 0x7, 0x7, 0x2, 0x2, 0x57, 
    0x58, 0x7, 0x8, 0x2, 0x2, 0x58, 0x59, 0x7, 0x10, 0x2, 0x2, 0x59, 0x5a, 
    0x5, 0x14, 0xb, 0x2, 0x5a, 0x5b, 0x7, 0x7, 0x2, 0x2, 0x5b, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x5c, 0x62, 0x5, 0x12, 0xa, 0x2, 0x5d, 0x5e, 0x5, 0x12, 
    0xa, 0x2, 0x5e, 0x5f, 0x7, 0x8, 0x2, 0x2, 0x5f, 0x60, 0x5, 0x10, 0x9, 
    0x2, 0x60, 0x62, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5c, 0x3, 0x2, 0x2, 0x2, 
    0x61, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x62, 0x11, 0x3, 0x2, 0x2, 0x2, 0x63, 
    0x66, 0x5, 0xe, 0x8, 0x2, 0x64, 0x66, 0x5, 0xa, 0x6, 0x2, 0x65, 0x63, 
    0x3, 0x2, 0x2, 0x2, 0x65, 0x64, 0x3, 0x2, 0x2, 0x2, 0x66, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0x67, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x7, 0x8, 
    0x2, 0x2, 0x69, 0x6b, 0x7, 0x10, 0x2, 0x2, 0x6a, 0x67, 0x3, 0x2, 0x2, 
    0x2, 0x6a, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x15, 0x3, 0x2, 0x2, 0x2, 
    0xb, 0x1b, 0x22, 0x32, 0x3f, 0x41, 0x4e, 0x61, 0x65, 0x6a, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

FtiExprParser::Initializer FtiExprParser::_init;
