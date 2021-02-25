#pragma once


class Lexer;
class Symbole;
class State {

    public :
        State(Lexer * l);
        virtual ~State(){}

        State* faireUnTruc(Symbole * s);

        bool getError() { return error; }
        bool getSelfDeleteError() { return selfDeleteError; }
        void resetError(){error=false;}
        virtual void nonTerm(){}
    protected :
        Lexer * lexer;
        bool error = false;
        bool selfDeleteError = false;

        virtual State* val();
        virtual State* plus();
        virtual State* mult();
        virtual State* openPar();
        virtual State* closePar();
        virtual State* accept();
        virtual State* vide();

};
