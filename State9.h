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
        State* plus();
        State* mult();
        State* openPar(){ return nullptr; }
        State* closePar();
        State* accept();
        
};