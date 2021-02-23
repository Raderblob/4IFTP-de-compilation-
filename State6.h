#pragma once

#include <string>
#include "State.h"
using namespace std;

class State6 : public State
{    
    public:
        State6(Lexer * l): State(l){}
        ~State6();

    protected:
        void val(){}
        void plus(){}
        void mult(){}
        void openPar(){}
        void closePar(){}
        void accept(){}
        void nonTerm(){}
};
