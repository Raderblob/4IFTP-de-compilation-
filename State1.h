#pragma once

#include <string>
#include "State.h"
using namespace std;

class State1 : public State
{    
    public:
        State1(Lexer * l) : State(l){}
        virtual ~State1(){}

        void nonTerm(){}
    protected:
        State* val(){ return nullptr; }
        State* plus();
        State* mult();
        State* openPar(){ return nullptr; }
        State* closePar(){ return nullptr; }
        State* accept();
        
};