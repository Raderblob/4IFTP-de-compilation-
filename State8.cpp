#include "lexer.h"
#include "State0.h"
//#include "State1.h"
#include "State2.h"
#include "State3.h"
/*#include "State4.h"
#include "State5.h"
#include "State6.h"*/
#include "State7.h"
#include "State8.h"
#include "State9.h"

void r3 () {
    Symbole * prem;
    Symbole *second;
    second = lexer->symbols.top();
    lexer->symbols.pop();
    delete lexer->symbols.top(); // delete l'opérateur car c'est toujours un fois
    lexer->symbols.pop();
    prem = lexer->symbols.top();
    lexer->symbols.pop();
    int result = ((Entier*)prem)->getValeur()*((Entier*)second)->getValeur();
    delete prem;
    delete second;
    lexer->symbols.push(new Entier (result));

    lexer->states.pop();
    lexer->states.pop();
    lexer->states.pop();

    lexer->states.top().nonTerm();
}

void State8::plus(){
    r3();    
}

void State8::mult(){
    r3();    
}

void State8::closePar(){
    r3();    
}

void State8::accept(){
    r3();    
}

