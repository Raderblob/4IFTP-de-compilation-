#include "State9.h"
#include <iostream>
#include "lexer.h"
#include "State5.h"
#include "symbole.h"


State* State9::plus() {
    cout << "state9 reducing to" << endl;
    lexer->states.pop();
    delete lexer->states.top();
    lexer->states.pop();
    delete lexer->states.top();
    lexer->states.pop();

    delete lexer->symbols.top();
    lexer->symbols.pop();
    Symbole* midS = lexer->symbols.top();
    lexer->symbols.pop();
    delete lexer->symbols.top();
    lexer->symbols.pop();


    lexer->symbols.push(midS);

    midS->Affiche();
    cout << endl;

    lexer->states.top()->nonTerm();
    return this;
}

State* State9::mult() {
    this->plus();

    return this;
}
State* State9::closePar() {
    this->plus();

    return this;
}
State* State9::accept() {
    this->plus();

    return this;
}

