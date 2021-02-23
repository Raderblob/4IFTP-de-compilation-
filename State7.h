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
        void val() {}
        void plus(){}
        void mult(){}
        void openPar(){}
        void closePar() {}
        void accept() {}
        
};