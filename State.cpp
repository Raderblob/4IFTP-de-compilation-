#include "State.h"
#include "lexer.h"
#include "symbole.h"
#include "State9.h"
#include <iostream>

State::State(Lexer * l){
    lexer = l;
}

State*  State::faireUnTruc(Symbole * s) {
    State* res;

    switch ((int)(*s)) {
        case OPENPAR:
            res = openPar();
            break;
        case CLOSEPAR:
            res = closePar();
            break;
        case MULT:
            res = mult();
            break;
        case PLUS:
            res = plus();
            break;
        case INT:
            res = val();
            break;
        case FIN:
            res = accept();
            break;
        default:
            error = true;
            res = this;
            std::cout<<"Error unknown character, skipping"<<std::endl;
            break;
    }
    if (res == nullptr) {
        lexer->symbols.push(s);
    }

    return res;
}

State* State::val() {
    error = true;
    return this;
}
State* State::plus() {
    error = true;
    return this;
}
State* State::mult() {
    error = true;
    return this;
}
State* State::openPar() {
    error = true;
    return this;
}
State* State::closePar() {
    error = true;
    return this;
}
State* State::accept() {
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

    error = true;
    selfDeleteError = false;
    cout << "Error missing ')', Calculating as if ')' present. Pushing to state 9  "<<endl;

    lexer->symbols.push(new Symbole(CLOSEPAR));


    lexer->states.push(new State9(lexer));
    return this;
}
State* State::vide() {
    error = true;
    return this;
}

