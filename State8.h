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
        State* plus();
        State* mult();
        State* openPar(){ return nullptr; }
        State* closePar();
        State* accept();
        
};