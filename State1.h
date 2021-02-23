#pragma once

#include <string>
#include "State.h"
using namespace std;

class State1 : public State
{    
    public:
        State1(Lexer * l) : State(l){}
        ~State1();

    protected:
        void val(){}
        void plus();
        void mult();
        void openPar(){}
        void closePar(){}
        void accept();
        void nonTerm(){}
};