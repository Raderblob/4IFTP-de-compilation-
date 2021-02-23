#pragma once

#include <string>
#include "State.h"

class State2 : public State
{    
    public:
        State2(Lexer * l): State(l){}
        ~State2();

    protected:
        void val();
        void plus(){}
        void mult(){}
        void openPar();
        void closePar(){}
        void accept(){}
        void nonTerm();
};