#pragma once
#include "symbole.h"

class Lexer;

class State {

    public :
        State(Lexer * l) : lexer(l) {}
        ~State() { };

        void faireUnTruc();

    protected :
        Lexer * lexer;

        void val() {}
        void plus() {}
        void mult() {}
        void openPar() {}
        void closePar() {}
        void accept() {}
        void nonTerm() {}

};
