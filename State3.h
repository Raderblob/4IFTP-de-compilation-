#pragma once

#include <string>
#include "State.h"
using namespace std;

class State3 : public State
{    
    public:
        State3(Lexer * l): State(l){}
        virtual ~State3(){}


        void nonTerm(){}
    protected:
        State* val(){ return nullptr; }
        State* plus();
        State* mult();
        State* openPar(){ return nullptr; }
        State* closePar();
        State* accept();
        
};