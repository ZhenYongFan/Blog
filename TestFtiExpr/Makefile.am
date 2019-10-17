AUTOMAKE_OPTIONS = subdir-objects foreign

noinst_PROGRAMS = \
	TestFtiExpr

TestFtiExpr_CXXFLAGS =-DLINUX=2 -D_REENTRANT -D_GNU_SOURCE -I /usr/local/include/antlr4-runtime/ -UVERSION

FtiExprAntlr_SOURCES = \
	./antlr4/FtiExprBaseVisitor.cpp \
	./antlr4/FtiExprLexer.cpp \
	./antlr4/FtiExprParser.cpp \
	./antlr4/FtiExprVisitor.cpp

$(FtiExprAntlr_SOURCES): FtiExpr.g4
	java -jar /home/ansible/libs/antlr-4.7.2-complete.jar -Dlanguage=Cpp FtiExpr.g4 -visitor -no-listener -o ./antlr4

TestFtiExpr_SOURCES = \
	$(FtiExprAntlr_SOURCES) \
        TestFtiExprVisitor.cpp \
        TestFtiExprVisitorFixture.cpp \
        FtiExprErrorListener.cpp \
	TestFtiExpr.cpp

TestFtiExpr_LDADD = \
	-lcppunit -L/usr/local/lib/ -lantlr4-runtime

AM_CPPFLAGS = 
AM_CXXFLAGS = -Wall -Wextra -pedantic -std=C++11
AM_LDFLAGS = 

