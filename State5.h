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
        void val();
        void plus() {}
        void mult() {}
        void openPar();
        void closePar() {}
        void accept() {}
        
};