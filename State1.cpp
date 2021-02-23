#include "State1.h"
#include <iostream>
#include "lexer.h"
#include "State2.h"
#include "State3.h"
#include "State4.h"
#include "State5.h"
#include "symbole.h"

State* State1::plus(){
     std::cout<< "state1 pushing state 4"<< std::endl;
     lexer->states.push(new State4(lexer));
     return nullptr;
}

State* State1::mult(){
     std::cout<< "state1 pushing state 5"<< std::endl;
     lexer->states.push(new State5(lexer));
     return nullptr;
}

State* State1::accept(){
     std::cout<< "state1 accepting"<< std::endl;
     lexer->states.pop();

     cout << "Symbol length: " << lexer->symbols.size()<<endl;
     cout << "State length: " << lexer->states.size() << endl;
     cout << "result: " << lexer->symbols.top()->getValue()<<endl;
     return this;

}