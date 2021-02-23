#include "State.h"
#include "lexer.h"
#include "symbole.h"

State::State(Lexer * l){
    lexer = l;
}

void State::faireUnTruc(Symbole * s) {


    switch ((int)(*s)) {
    case OPENPAR:
        openPar();
        break;
    case CLOSEPAR:
        closePar();
        break;
    case MULT:
        mult();
        break;
    case PLUS:
        plus();
        break;
    case INT:
        val();
        break;
    case FIN:
        accept();
        break;

    lexer->symbols.push(s);
}


}