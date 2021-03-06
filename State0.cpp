#include "State0.h"
#include <iostream>
#include "lexer.h"
#include "State1.h"
#include "State2.h"
#include "State3.h"

State* State0::openPar(){
     cout<< "state0 pushing state 2"<< endl;
     lexer->states.push(new State2(lexer));
     return nullptr;
}

State* State0::val(){
     cout<< "state0 pushing state 3"<< endl;
     lexer->states.push(new State3(lexer));
     return nullptr;
}

void State0::nonTerm(){
     cout<< "state0 pushing state 1"<< endl;
     lexer->states.push(new State1(lexer));
}