#pragma once

#include <string>
#include "State.h"
using namespace std;

class State3 : public State
{    
    public:
        State3(Lexer * l): State(l){}


    protected:
        State* plus();
        State* mult();
        State* closePar();
        State* accept();
        
};