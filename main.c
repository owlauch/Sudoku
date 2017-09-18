#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#include "check.h"
#include "matriz.h"
#include "desenhaTabela.h"
#include "catchCoord.h"
#include "defineNumero.h"


int main(){
   int matriz[9][9], cord[1], valor;
   char y;
   criaMatriz(matriz);
   desenhaTabela(matriz);
   do{
      printf("\n linha: ");
      cord[0] =(int) getchar();
      fflush(stdin);
      cord[0]= defineNumero(cord[0]);
   } while (((cord[0]<1) || (cord[0]>9)) );
   do{
      printf("\n coluna: ");
      cord[1] = (int)getchar();
      fflush(stdin);
      cord[1]= defineNumero(cord[1]);
   } while (((cord[1]<1) || (cord[1]>9)));
   do{
      printf("\n valor: ");
      valor = (int) getchar();
      fflush(stdin);
      valor = defineNumero(valor);
   } while (((valor<1) || (valor>9)) );
   printf("\n%d %d\n",cord[0],cord[1]);
   matriz[cord[0]][cord[1]] = valor;
   desenhaTabela(matriz);
   return 0;
}
