#pragma once

#include <string>
#include "State.h"
using namespace std;

class State3 : public State
{    
    public:
        State3(Lexer * lexer);
        ~State3();

    protected:
        void val();
        void plus();
        void mult();
        void openPar();
        void closePar();
        void accept();
        void nonTerm();
};
