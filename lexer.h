#pragma once

#include <string>
#include <stack>
using namespace std;

class Symbole;
class State; 

class Lexer {

   public:
      Lexer(string s);
      ~Lexer() { }

      Symbole * Consulter();
      void Avancer();

      stack<Symbole*> symbols;
      stack<State*> states;
      bool getError(){return hasErrors;}
   protected:
      string flux;
      int tete;
      Symbole * tampon;
      bool hasErrors = false;
};
