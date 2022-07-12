#include "../headers/Semantic.h"
#include "../headers/Constants.h"

#include <iostream>

void Semantic::executeAction(int action, const Token *token) throw(SemanticError)
{
    std::cout << "Ação: " << action << ", Token: " << token->getId()
              << ", Lexema: " << token->getLexeme() << std::endl;
}
