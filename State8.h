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
        void val() {}
        void plus(){}
        void mult(){}
        void openPar(){}
        void closePar() {}
        void accept() {}
        
};