#pragma once

#include <string>
#include "State.h"
using namespace std;

class State7 : public State
{    
    public:
        State7(Lexer * lexer);
        ~State7();

    protected:
        void val();
        void plus();
        void mult();
        void openPar();
        void closePar();
        void accept();
        void nonTerm();
};