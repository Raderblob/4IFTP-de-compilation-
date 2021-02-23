#pragma once


class Lexer;
class Symbole;
class State {

    public :
        State(Lexer * l);
        virtual ~State(){}

        State* faireUnTruc(Symbole * s);

        virtual void nonTerm(){}
    protected :
        Lexer * lexer;

        virtual State* val() { return nullptr; }
        virtual State* plus() { return nullptr; }
        virtual State* mult() { return nullptr; }
        virtual State* openPar() { return nullptr; }
        virtual State* closePar() { return nullptr; }
        virtual State* accept() { return nullptr; }
        virtual State* vide() { return nullptr; }

};
