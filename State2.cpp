#include "State2.h"
#include <iostream>
#include "lexer.h"
#include "State3.h"
#include "State6.h"

void State2::openPar(){
     cout<< "state2 pushing state 2"<< endl;
     lexer->states.push(new State2(lexer));
    
}

void State2::val(){
     cout<< "state2 pushing state 3"<< endl;
     lexer->states.push(new State3(lexer));
    
}

void State2::nonTerm(){
     cout<< "state2 pushing state 6"<< endl;
    lexer->states.push(new State6(lexer));
}