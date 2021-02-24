#include "State6.h"
#include "lexer.h"
#include "State4.h"
#include "State5.h"
#include "State9.h"
#include <iostream>

State* State6::plus(){
     cout << "state6 pushing state 4" << endl;
     lexer->states.push(new State4(lexer));
     return nullptr;
}

State* State6::mult(){
     cout << "state6 pushing state 5" << endl;
     lexer->states.push(new State5(lexer));
     return nullptr;
}

State* State6::closePar(){
     cout << "state6 pushing state 9" << endl;
     lexer->states.push(new State9(lexer));
     return nullptr;
}
