#include "State3.h"
#include <iostream>
#include "symbole.h"
#include "lexer.h"

#include "State2.h"

State* State3::plus() {
    cout<< "state3 reducing to ";
    lexer->symbols.top()->Affiche();
    cout << endl;
    State* toDel = lexer->states.top();
    

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
     cout<< "state3 reducing"<< endl;
     return this;
}

