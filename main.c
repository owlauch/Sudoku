#include <stdio.lib>;
#include <time.h>;

#include "check.h"
#include "matriz.h"
#include "desenhaTabela.h"
#include "catchCoord.h"

using namespace std;

int main()
{
   int matriz[9][9], x, y, v;
   char cord;
   // criaMatriz(matriz);
   // // matriz[8][8] = 9;
   // desenhaTabela(matriz);
   do{
      printf("\n coluna: ");
      scanf("%c",&cord);
      x = (int)cord;
      printf("%d",x);
      // printf("linha: ");
      // y=gets();
   } while (x>49 && x<57);
   // check(matriz, x, y, v);
   return 0;
}
