#include "State.h"
#include "lexer.h"
#include "symbole.h"
#include <iostream>

State::State(Lexer * l){
    lexer = l;
}

State*  State::faireUnTruc(Symbole * s) {
    State* res;

    switch ((int)(*s)) {
        case OPENPAR:
            res = openPar();
            break;
        case CLOSEPAR:
            res = closePar();
            break;
        case MULT:
            res = mult();
            break;
        case PLUS:
            res = plus();
            break;
        case INT:
            res = val();
            break;
        case FIN:
            res = accept();
            break;
        default:
            res = nullptr;
            std::cout<<"err"<<std::endl;
            break;
    }
    if (res == nullptr) {
        lexer->symbols.push(s);
    }

    return res;
}