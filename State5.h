#pragma once

#include <string>
#include "State.h"
using namespace std;

class State5 : public State
{    
    public:
        State5(Lexer * l) : State(l){}


        void nonTerm();
    protected:
        State* val();
        State* openPar();

        State* accept();
};