#pragma once

#include <string>
#include "State.h"
using namespace std;

class State4 : public State
{    
    public:
        State4(Lexer * lexer);
        ~State4();

    protected:
        void val();
        void plus() {}
        void mult() {}
        void openPar();
        void closePar() {}
        void accept() {}
        void nonTerm();
};