#pragma once

#include <string>
#include "State.h"

class State2 : public State
{    
    public:
        State2(Lexer * l): State(l){}
        virtual ~State2(){}


        void nonTerm();
    protected:
        void val();
        void plus(){}
        void mult(){}
        void openPar();
        void closePar(){}
        void accept(){}
        
};