#pragma once

#include <string>
#include "State.h"
using namespace std;

class State0 : public State
{    
    public:
        State0(Lexer * l): State(l){}
        virtual ~State0(){}

        void nonTerm();
    protected:
        State* val();
        State* plus() { return nullptr; }
        State* mult(){ return nullptr; }
        State* openPar();
        State* closePar(){ return nullptr; }
        State* accept(){ return nullptr; }
        
};
