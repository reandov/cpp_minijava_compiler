#include <fstream>
#include <iostream>

#include "headers/Lex.h"
#include "headers/Semantic.h"
#include "headers/Syntactic.h"
#include "headers/Token.h"

using namespace std;

int main(int argc, char const *argv[]) {
    Lex lex;
    Syntactic syn;
    Semantic sem;

    string inputString;

    if (argc != 2) {
        if (argc < 2) cout << "Error: Missing arguments: pathFile" << endl;
        if (argc > 2) cout << "Error: To much arguments: " << argv[2] << endl;
        return -1;
    }

    ifstream file(argv[1]);

    if (!file.is_open()) {
        cout << "Error: Invalid path file: " << argv[1] << endl;
        return -1;
    }

    lex.setInput(file);

    try {
        syn.parse(&lex, &sem);
    } catch (LexicalError &e) {
        cout << "Lexical error at: " << lex.input.substr(e.getPosition(), 20) << endl;
    } catch (SyntaticError &e) {
        cout << "Syntatic error at: " << lex.input.substr(e.getPosition(), 20) << endl;
    } catch (SemanticError &e) {
        cout << "Semantic error at: " << lex.input.substr(e.getPosition(), 20) << endl;
    }

    file.close();
}
