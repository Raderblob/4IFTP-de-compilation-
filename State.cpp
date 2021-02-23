#include "State.h"
#include "lexer.h"

void State::faireUnTruc() {
    switch ((int)((*lexer).symbols.top())) {
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
    }
}