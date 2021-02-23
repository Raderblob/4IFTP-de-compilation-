#include "State3.h"
#include <iostream>
#include "symbole.h"
#include "lexer.h"

#include "State2.h"

State* State3::plus() {
    cout<< "state3 reducing to ";
    lexer->symbols.top()->Affiche();
    cout << endl;
    

    lexer->states.pop();

    State* st = lexer->states.top();

    st->nonTerm();


   
    return this;
}

State* State3::mult(){
    this->plus();
     
     return this;
}

State* State3::closePar(){
    this->plus();
     return this;
}

State* State3::accept(){
    this->plus();
     return this;
}

