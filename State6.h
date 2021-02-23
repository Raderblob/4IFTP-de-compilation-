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
        void val() {}
        void plus();
        void mult();
        void openPar(){}
        void closePar();
        void accept() {}
        
};