#pragma once

#include <string>
#include "State.h"
using namespace std;

class State4 : public State
{    
    public:
        State4(Lexer * l) : State(l){}

        void nonTerm();
    protected:
        State* val();
        State* openPar();
        State* accept();
};