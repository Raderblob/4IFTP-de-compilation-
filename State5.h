#pragma once

#include <string>
#include "State.h"
using namespace std;

class State5 : public State
{    
    public:
        State5(Lexer * l) : State(l){}
        virtual ~State5(){}


        void nonTerm();
    protected:
        State* val();
        State* plus() { return nullptr; }
        State* mult() { return nullptr; }
        State* openPar();
        State* closePar() { return nullptr; }
        State* accept() { return nullptr; }
        
};