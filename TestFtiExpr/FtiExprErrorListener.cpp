#include "FtiExprErrorListener.h"
#include <Token.h>
#include <Recognizer.h>
#include <Parser.h>
#include <algorithm>

CFtiExprErrorListener::CFtiExprErrorListener(void)
{
    m_nLine = 0;
    m_nPositionInLine = 0;
}

void CFtiExprErrorListener::syntaxError(Recognizer * recognizer, Token * offendingSymbol,
    size_t line, size_t charPositionInLine, const std::string &msg, std::exception_ptr /*e*/)
{
    m_nLine = line;
    m_nPositionInLine = charPositionInLine;
    m_strErrMsg = msg;
    m_strOffendingSymbol = offendingSymbol->toString();
    std::vector<std::string> stack = dynamic_cast<Parser *>(recognizer)->getRuleInvocationStack();
    std::reverse(stack.begin(), stack.end());
    m_strStack.clear();
    for (size_t nIndex = 0 ; nIndex < stack.size(); nIndex ++)
    {
        m_strStack += stack[nIndex];
        if(nIndex + 1 < stack.size())
            m_strStack += "\r\n";
    }
}
