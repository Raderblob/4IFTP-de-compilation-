#pragma once

#include <string>
#include "State.h"
using namespace std;

class State9 : public State
{    
    public:
        State9(Lexer * l):State(l){}
        ~State9();

    protected:
        void val() {}
        void plus();
        void mult();
        void openPar() {}
        void closePar();
        void accept();
        void nonTerm(){}
};
