#pragma once

#include <string>
#include "State.h"
using namespace std;

class State6 : public State
{    
    public:
        State6(Lexer * l) : State(l){}


        void nonTerm() {}
    protected:
        State* plus();
        State* mult();
        State* closePar();
        
};