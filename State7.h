#pragma once

#include <string>
#include "State.h"
using namespace std;

class State7 : public State
{    
    public:
        State7(Lexer * l) : State(l){}
        virtual ~State7(){}

        void nonTerm() {}
    protected:
        State* val() { return nullptr; }
        State* plus(){ return nullptr; }
        State* mult(){ return nullptr; }
        State* openPar(){ return nullptr; }
        State* closePar() { return nullptr; }
        State* accept() { return nullptr; }
        
};