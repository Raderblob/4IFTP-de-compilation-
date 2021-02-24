#include "State9.h"
#include <iostream>
#include "lexer.h"
#include "State5.h"
#include "symbole.h"


State* State9::plus() {
    if (lexer->states.size() < 4) {
        error = true;
        selfDeleteError = true;
        cout << "No numbers found ending calculation" << endl;
        lexer->states.pop();

        while (lexer->states.size() > 0) {
            delete lexer->states.top();
            lexer->states.pop();
        }
        while (lexer->symbols.size() > 0) {
            delete lexer->symbols.top();
            lexer->symbols.pop();
        }
        return this;
    }
    cout << "state9 reducing to ";
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

