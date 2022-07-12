#include <iostream>
#include <fstream>

#include "headers/Lex.h"
#include "headers/Syntactic.h"
#include "headers/Semantic.h"
#include "headers/Token.h"

using namespace std;

int main(int argc, char const *argv[])
{
  Lex lex;
  Syntactic syn;
  Semantic sem;

  string inputString;

  ifstream file("language/sample.txt");

  lex.setInput(file);

  try
  {
    syn.parse(&lex, &sem);
  }
  catch (LexicalError &e)
  {
    cout << "Lexical error at: " << lex.input.substr(e.getPosition(), 20) << endl;
  }
  catch (SyntaticError &e)
  {
    cout << "Syntatic error at: " << lex.input.substr(e.getPosition(), 20) << endl;
  }
  catch (SemanticError &e)
  {
    cout << "Semantic error at: " << lex.input.substr(e.getPosition(), 20) << endl;
  }

  cout << "Exited successfully" << endl;

  file.close();
}
