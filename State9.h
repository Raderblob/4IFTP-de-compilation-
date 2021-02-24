#pragma once

#include <string>
#include "State.h"
using namespace std;

class State9 : public State
{    
    public:
        State9(Lexer * l) : State(l){}


    protected:
        State* plus();
        State* mult();
        State* closePar();
        State* accept();
        
};