#ifndef LEX_H
#define LEX_H

#include <iostream>
#include <string>

#include "LexicalError.h"
#include "Token.h"

class Lex {
   public:
    std::string input;
    Lex(std::istream &input) { setInput(input); }
    Lex() : input(""), position(0) {}

    void setInput(std::istream &input);
    void setPosition(unsigned pos) { position = pos; }
    Token *nextToken() throw(LexicalError);

   private:
    unsigned position;

    int nextState(unsigned char c, int state) const;
    TokenId tokenForState(int state) const;
    TokenId lookupToken(TokenId base, const std::string &key);

    bool hasInput() const { return position < input.size(); }
    char nextChar() { return hasInput() ? input[position++] : (char)-1; }
};

#endif
