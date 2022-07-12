#ifndef SEMANTIC_H
#define SEMANTIC_H

#include "SemanticError.h"
#include "Token.h"

class Semantic {
   public:
    void executeAction(int action, const Token *token) throw(SemanticError);
};

#endif
