#include "State6.h"
#include "lexer.h"
#include "State4.h"
#include "State5.h"
#include "State9.h"

void State6::plus(){
     lexer->states.push(new State4(lexer));
    
}

void State6::mult(){
     lexer->states.push(new State5(lexer));
    
}

void State6::closePar(){
     lexer->states.push(new State9(lexer));
    
}
