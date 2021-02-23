#pragma once

#include <string>
#include "State.h"
using namespace std;

class State5 : public State
{    
    public:
        State5(Lexer * lexer);
        ~State5();

    protected:
        void val();
        void plus() {}
        void mult() {}
        void openPar();
        void closePar() {}
        void accept() {}
        void nonTerm();
};