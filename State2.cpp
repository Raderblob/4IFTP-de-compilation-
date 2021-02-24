#include "State2.h"
#include <iostream>
#include "lexer.h"
#include "State3.h"
#include "State6.h"
#include "symbole.h"

State* State2::openPar(){
     cout<< "state2 pushing state 2"<< endl;
     lexer->states.push(new State2(lexer));
     return nullptr;
}

State* State2::val(){
     cout<< "state2 pushing state 3"<< endl;
     lexer->states.push(new State3(lexer));
     return nullptr;
}

void State2::nonTerm(){
     cout<< "state2 pushing state 6"<< endl;
    lexer->states.push(new State6(lexer));
}

State* State2::closePar() {
    error = true;
    selfDeleteError = true;
    cout << "Error missing value encountered '()', removing last operator  " << endl;

    lexer->states.pop();
    delete lexer->symbols.top();
    lexer->symbols.pop();

    delete lexer->states.top();
    lexer->states.pop();

    delete lexer->symbols.top();
    lexer->symbols.pop();

    return this;
}
State* State2::mult() {
    error = true;
    selfDeleteError = true;
    cout << "Error missing value encountered '(*', removing last operator  " << endl;

    lexer->states.pop();
    delete lexer->symbols.top();
    lexer->symbols.pop();

    delete lexer->states.top();
    lexer->states.pop();

    delete lexer->symbols.top();
    lexer->symbols.pop();

    return this;
}
State* State2::plus() {
    error = true;
    selfDeleteError = true;
    cout << "Error missing value encountered '(+', removing last operator  " << endl;

    lexer->states.pop();
    delete lexer->symbols.top();
    lexer->symbols.pop();

    delete lexer->states.top();
    lexer->states.pop();

    delete lexer->symbols.top();
    lexer->symbols.pop();

    return this;
}