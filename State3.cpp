#include "State3.h"
#include <iostream>
#include "symbole.h"
#include "lexer.h"

#include "State2.h"

void State3::plus(){
    cout<< "state3 reducing"<< endl;
    
    State* toDel = lexer->states.top();
    //

    lexer->states.pop();
    delete toDel;

    State* st = lexer->states.top();
    cout<<st<<endl;
    st->nonTerm();
    lexer->symbols.top()->Affiche();
}

void State3::mult(){
     cout<< "state3 preducing"<< endl;
     
    
}

void State3::closePar(){
     cout<< "state3 reducing"<< endl;
    
}

void State3::accept(){
     cout<< "state3 reducing"<< endl;
    
}

