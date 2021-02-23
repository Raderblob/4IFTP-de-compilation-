#pragma once

#include <string>
#include "State.h"
using namespace std;

class State9 : public State
{    
    public:
        State9(Lexer * l) : State(l){}
        virtual ~State9(){}


        void nonTerm() {}
    protected:
        State* val() { return nullptr; }
        State* plus(){ return nullptr; }
        State* mult(){ return nullptr; }
        State* openPar(){ return nullptr; }
        State* closePar() { return nullptr; }
        State* accept() { return nullptr; }
        
};