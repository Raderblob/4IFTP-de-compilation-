#include "State7.h"
#include <iostream>
#include "lexer.h"
#include "State5.h"
#include "symbole.h"


State* State7::plus() {
    cout << "state7 reducing to" << endl;
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
    result = new Entier(leftS->getValue() + rightS->getValue());
    lexer->symbols.push(result);

    result->Affiche();
    cout << endl;

    lexer->states.top()->nonTerm();
    return this;
}

State* State7::mult() {
    cout << "state7 pushing state 5" << endl;
    lexer->states.push(new State5(lexer));
    return nullptr;
}
State* State7::closePar() {
    this->plus();
    
    return this;
}
State* State7::accept() {
    this->plus();
    
    return this;
}

