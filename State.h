#pragma once
#include "symbole.h"

class Lexer;

class State {

    public :
        State(Lexer * l) : lexer(l) {}
        virtual ~State();

        virtual void faireUnTruc(Symbole * s);


    protected :
        Lexer * lexer;

        virtual void val() {}
        virtual void plus() {}
        virtual void mult() {}
        virtual void openPar() {}
        virtual void closePar() {}
        virtual void accept() {}
        virtual void nonTerm() {}
        virtual void vide() {}

};
