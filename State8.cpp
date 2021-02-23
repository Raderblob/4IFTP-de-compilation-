#include "State8.h"
#include <iostream>
#include "lexer.h"
#include "State5.h"
#include "symbole.h"


State* State8::plus() {
    cout << "state8 reducing to" << endl;
    lexer->states.pop();
    delete lexer->states.top();
    lexer->states.pop();
    delete lexer->states.top();
    lexer->states.pop();

    Symbole* rightS = lexer->symbols.top();
    lexer->symbols.pop();
    delete  lexer->symbols.top();
    lexer->symbols.pop();
    Symbole* leftS = lexer->symbols.top();
    lexer->symbols.pop();


    Symbole* result;
    result = new Entier(leftS->getValue() * rightS->getValue());
    lexer->symbols.push(result);

    result->Affiche();
    cout << endl;

    lexer->states.top()->nonTerm();
    return this;
}

State* State8::mult() {
    this->plus();

    return this;
}
State* State8::closePar() {
    this->plus();

    return this;
}
State* State8::accept() {
    this->plus();

    return this;
}

