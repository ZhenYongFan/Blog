#include "BaseErrorListener.h"
using namespace antlr4;

class ANTLR4CPP_PUBLIC CFtiExprErrorListener : public BaseErrorListener
{
public:
    CFtiExprErrorListener(void);
    virtual void syntaxError(Recognizer *recognizer, Token * offendingSymbol, size_t line, size_t charPositionInLine,
        const std::string &msg, std::exception_ptr e) override;
public:
    int m_nLine ;
    int m_nPositionInLine ;
    std::string m_strOffendingSymbol ;
    std::string m_strErrMsg ;
    std::string m_strStack ;
};
