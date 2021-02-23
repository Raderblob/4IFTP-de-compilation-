#include "State1.h"
#include "lexer.h"
#include "State2.h"
#include "State3.h"
#include "State4.h"
#include "State5.h"

void State1::plus(){
     lexer->states.push(new State4(lexer));
    
}

void State1::mult(){
     lexer->states.push(new State5(lexer));
    
}

void State1::accept(){

}