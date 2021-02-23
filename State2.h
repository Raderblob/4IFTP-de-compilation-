#pragma once

#include <string>
#include "State.h"
using namespace std;

class State2 : public State
{    
    public:
        State2(Lexer * lexer);
        ~State2();

    protected:
        void val();
        void plus();
        void mult();
        void openPar();
        void closePar();
        void accept();
        void nonTerm();
};
