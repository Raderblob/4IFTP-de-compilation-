#include <iostream>
#include "lexer.h"
#include "symbole.h"

int main(void) {
   //string chaine("((--a1+34)*((()()()(-+-123");//with errors
   string chaine(")(1*()+34)*(a+123");
   Lexer l(chaine);

   Symbole * s;
   while(*(s=l.Consulter())!=FIN || l.states.size() >1) {
      s->Affiche();
      cout<<endl;
      l.Avancer();
      cout<<"states: "<< l.states.size() << endl;
   }
   delete l.Consulter();
   return 0;
}

