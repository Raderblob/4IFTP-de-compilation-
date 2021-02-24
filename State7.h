#pragma once

#include <string>
#include "State.h"
using namespace std;

class State7 : public State
{    
    public:
        State7(Lexer * l) : State(l){}

    protected:
        State* plus();
        State* mult();
        State* closePar();
        State* accept();
        
};