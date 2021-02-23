#pragma once

#include <string>
#include "State.h"

class State2 : public State
{    
    public:
        State2(Lexer * l): State(l){}
        virtual ~State2(){}


        void nonTerm();
    protected:
        State* val();
        State* plus(){ return nullptr; }
        State* mult(){ return nullptr; }
        State* openPar();
        State* closePar(){ return nullptr; }
        State* accept(){ return nullptr; }
        
};