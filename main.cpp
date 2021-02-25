#include <iostream>
#include "lexer.h"
#include "symbole.h"
#include "State.h"

int main(void) {
   string chaine("(1+34)*123");
   //string chaine("((--a1+34)*(((-+-123");//with errors
   //string chaine(")(1()+34)*(a+123");//with errors
   //string chaine("8*(+)+1");//with errors
   //string chaine("8*");//with errors
  //string chaine("*)(");//with errors
   Lexer l(chaine);

   Symbole * s;
   while(*(s=l.Consulter())!=FIN || l.states.size() >1) {
      s->Affiche();
      cout<<endl;
      l.Avancer();
      cout<<"states: "<< l.states.size() << endl;
   }
   while (l.states.size() > 0) {
      delete l.states.top();
      l.states.pop();
   }
   while (l.symbols.size() > 0) {
      delete l.symbols.top();
      l.symbols.pop();
   }
   delete l.Consulter();
   return 0;
}

