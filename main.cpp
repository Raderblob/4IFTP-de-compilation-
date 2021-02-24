#include <iostream>
#include "lexer.h"
#include "symbole.h"

int main(void) {
   string chaine("(--a1+34)*(+-123");//with errors

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

