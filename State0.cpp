#include "State0.h"
#include "lexer.h"
#include "State1.h"
#include "State2.h"
#include "State3.h"

void State0::openPar(){
     lexer->states.push(new State3(lexer));
    
}

void State0::val(){
     lexer->states.push(new State2(lexer));
    
}

void State0::nonTerm(){
     lexer->states.push(new State1(lexer));
    
}