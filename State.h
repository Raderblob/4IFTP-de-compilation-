#pragma once


class Lexer;
class Symbole;
class State {

    public :
        State(Lexer * l);
        virtual ~State(){}

        void faireUnTruc(Symbole * s);

        virtual void nonTerm(){}
    protected :
        Lexer * lexer;

        virtual void val() {}
        virtual void plus() {}
        virtual void mult() {}
        virtual void openPar() {}
        virtual void closePar() {}
        virtual void accept() {}
        virtual void vide() {}

};
