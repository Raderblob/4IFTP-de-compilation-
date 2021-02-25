#pragma once

#include <string>
#include "State.h"

class State2 : public State
{    
    public:
        State2(Lexer * l): State(l){}


        void nonTerm();
    protected:
        State* val();
        State* openPar();
        State* closePar();

        
};