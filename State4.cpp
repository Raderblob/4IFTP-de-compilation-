#include "State4.h"
#include "lexer.h"
#include "State3.h"
#include "State2.h"
#include "State7.h"

State* State4::val() {
     lexer->states.push(new State3(lexer));
     return nullptr;
}

State* State4::openPar() {
     lexer->states.push(new State2(lexer));
     return nullptr;
}

void State4::nonTerm() {
    lexer->states.push(new State7(lexer));
}
