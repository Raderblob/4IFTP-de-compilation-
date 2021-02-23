#include "State5.h"
#include "lexer.h"
#include "State3.h"
#include "State2.h"
#include "State8.h"

State* State5::val(){
     lexer->states.push(new State3(lexer));
     return nullptr;
}

State* State5::openPar(){
     lexer->states.push(new State2(lexer));
     return nullptr;
}

void State5::nonTerm(){
     lexer->states.push(new State8(lexer));
}
