#include <iostream>
#include "lexer.h"
#include "symbole.h"

int main(void) {
   string chaine("(1+34)*123");

   Lexer l(chaine);

   Symbole * s;
   while(*(s=l.Consulter())!=FIN || l.states.size() >1) {
      s->Affiche();
      cout<<endl;
      l.Avancer();
      cout<<"states: "<< l.states.size() << endl;
   }
   return 0;
}

