#include "State6.h"
#include "lexer.h"
#include "State4.h"
#include "State5.h"
#include "State9.h"

State* State6::plus(){
     lexer->states.push(new State4(lexer));
     return nullptr;
}

State* State6::mult(){
     lexer->states.push(new State5(lexer));
     return nullptr;
}

State* State6::closePar(){
     lexer->states.push(new State9(lexer));
     return nullptr;
}
