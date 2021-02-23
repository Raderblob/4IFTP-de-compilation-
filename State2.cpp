#include "State2.h"
#include "lexer.h"
#include "State3.h"
#include "State6.h"

void State2::openPar(){
     lexer->states.push(new State2(lexer));
    
}

void State2::val(){
     lexer->states.push(new State3(lexer));
    
}

void State2::nonTerm(){
    lexer->states.push(new State6(lexer));
}