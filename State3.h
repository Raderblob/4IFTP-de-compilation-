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
        void val(){}
        void plus();
        void mult();
        void openPar(){}
        void closePar();
        void accept();
        
};