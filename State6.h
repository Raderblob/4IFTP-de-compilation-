#pragma once

#include <string>
#include "State.h"
using namespace std;

class State6 : public State
{    
    public:
        State6(Lexer * l) : State(l){}
        virtual ~State6(){}


        void nonTerm() {}
    protected:
        State* val() { return nullptr; }
        State* plus();
        State* mult();
        State* openPar(){ return nullptr; }
        State* closePar();
        State* accept() { return nullptr; }
        
};