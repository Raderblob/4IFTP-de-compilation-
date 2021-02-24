#include "State4.h"
#include "lexer.h"
#include "State3.h"
#include "State2.h"
#include "State7.h"
#include <iostream>

State* State4::val() {
     cout << "state4 pushing state 3" << endl;
     lexer->states.push(new State3(lexer));
     return nullptr;
}

State* State4::openPar() {
    cout << "state4 pushing state 2" << endl;
     lexer->states.push(new State2(lexer));
     return nullptr;
}

void State4::nonTerm() {
    cout << "state4 pushing state 7" << endl;
    lexer->states.push(new State7(lexer));
}

State* State4::accept() {
    error = true;
    selfDeleteError = true;
    cout << "Error missing value, removing last operator  " << endl;

    lexer->states.pop();
    delete lexer->symbols.top();
    lexer->symbols.pop();
    
    return this;
}