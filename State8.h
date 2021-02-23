#pragma once

#include <string>
#include "State.h"
using namespace std;

class State8 : public State
{    
    public:
        State8(Lexer * l) : State(l){}
        virtual ~State8(){}

        void nonTerm() {}
    protected:
        State* val() { return nullptr; }
        State* plus(){ return nullptr; }
        State* mult(){ return nullptr; }
        State* openPar(){ return nullptr; }
        State* closePar() { return nullptr; }
        State* accept() { return nullptr; }
        
};