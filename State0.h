#pragma once

#include <string>
#include "State.h"
using namespace std;

class State0 : public State
{    
    public:
        State0(Lexer * lexer);
        ~State0();

    protected:
        void val();
        void plus();
        void mult();
        void openPar();
        void closePar();
        void accept();
        void nonTerm();
};
