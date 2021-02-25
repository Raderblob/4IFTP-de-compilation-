#include "State5.h"
#include "lexer.h"
#include "State3.h"
#include "State2.h"
#include "State8.h"
#include <iostream>

State* State5::val(){
     cout << "state5 pushing state 3" << endl;
     lexer->states.push(new State3(lexer));
     return nullptr;
}

State* State5::openPar(){
     cout << "state5 pushing state 2" << endl;
     lexer->states.push(new State2(lexer));
     return nullptr;
}

void State5::nonTerm(){
     cout << "state5 pushing state 8" << endl;
     lexer->states.push(new State8(lexer));
}

State* State5::accept() {
    error = true;
    selfDeleteError = true;
    cout << "Error missing value, removing last operator  " << endl;

    lexer->states.pop();
    delete lexer->symbols.top();
    lexer->symbols.pop();

    return this;
}
