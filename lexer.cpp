#include "lexer.h"
#include "symbole.h"
#include "State0.h"
#include <iostream>
Lexer::Lexer(string s){
   flux = s;
   tete = 0;
   tampon = nullptr;
   states.push(new State0(this));
}

Symbole * Lexer::Consulter() {
   if (!tampon) {

      if (tete==(int)flux.length())
         tampon = new Symbole(FIN);
      else
      {

         switch (flux[tete]) {
            case '(':
               tampon = new Symbole(OPENPAR);
               tete++;
               break;
            case ')':
               tampon = new Symbole(CLOSEPAR);
               tete++;
               break;
            case '*':
               tampon = new Symbole(MULT);
               tete++;
               break;
            case '+':
               tampon = new Symbole(PLUS);
               tete++;
               break;
            default:
               if (flux[tete]<='9' && flux[tete]>='0') {
                  int resultat = flux[tete]-'0';
                  int i=1;
                  while (flux[tete+i]<='9' && flux[tete+i]>='0') {
                     resultat = resultat*10+(flux[tete+i]-'0');
                     i++;
                  }
                  tete = tete+i;
                  tampon = new Entier(resultat);
               }
               else {
                  tampon = new Symbole(ERREUR);
                  tete++;
               }
         }
      }
   }
   return tampon;
}

void Lexer::Avancer() {
   State* res = states.top()->faireUnTruc(tampon);
   if (res != nullptr) {
       if (res->getError()) {
           cout << "An error has occured" << endl;
           delete tampon;
           tampon = nullptr;
            res->resetError();
           if(res->getSelfDeleteError()){
              delete res;
           }
       }else{
         delete res;
       }
       
       
       
   }
   else {
       tampon = nullptr;
   }
   
}

