#ifndef SEMANTIC_H
#define SEMANTIC_H

#include "Token.h"
#include "SemanticError.h"

class Semantic
{
public:
    void executeAction(int action, const Token *token) throw (SemanticError );
};

#endif
