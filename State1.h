#pragma once

#include <string>
#include "State.h"
using namespace std;

class State1 : public State
{    
    public:
        State1(Lexer * l) : State(l){}

        void nonTerm(){}
    protected:
        State* plus();
        State* mult();
        State* accept();
        
};