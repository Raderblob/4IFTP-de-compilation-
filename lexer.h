#pragma once

#include <string>
#include <stack>
#include "symbole.h"
#include "State.h"
using namespace std;

class Lexer {

   public:
      Lexer(string s) : flux(s), tete(0), tampon(nullptr) { }
      ~Lexer() { }

      Symbole * Consulter();
      void Avancer();

      stack<Symbole*> symbols;
      stack<State*> states;
   protected:
      string flux;
      int tete;
      Symbole * tampon;
};
