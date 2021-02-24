#pragma once

#include <string>
#include "State.h"
using namespace std;

class State0 : public State
{    
    public:
        State0(Lexer * l): State(l){}

        void nonTerm();
    protected:
        State* val();
        State* openPar();
        
};
