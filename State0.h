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
        void val();
        void plus(){}
        void mult(){}
        void openPar();
        void closePar(){}
        void accept(){}
        
};
