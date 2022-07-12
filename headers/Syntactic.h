#ifndef Syntactic_H
#define Syntactic_H

#include "Constants.h"
#include "Token.h"
#include "Lex.h"
#include "Semantic.h"
#include "SyntaticError.h"

#include <stack>

class Syntactic
{
public:
    Syntactic() : previousToken(0), currentToken(0) { }

    ~Syntactic()
    {
        if (previousToken != 0 && previousToken != currentToken) delete previousToken;
        if (currentToken != 0)  delete currentToken;
    }

    void parse(Lex *scanner, Semantic *semanticAnalyser) throw (AnalysisError);

private:
    std::stack<int> stack;
    Token *currentToken;
    Token *previousToken;
    Lex *scanner;
    Semantic *semanticAnalyser;

    bool step() throw (AnalysisError);
};

#endif
