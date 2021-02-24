#pragma once

#include <string>
#include "State.h"
using namespace std;

class State8 : public State
{    
    public:
        State8(Lexer * l) : State(l){}

    protected:
        State* plus();
        State* mult();
        State* closePar();
        State* accept();
        
};