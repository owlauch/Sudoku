#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#include "check.h"
#include "matriz.h"
#include "desenhaTabela.h"
#include "catchCoord.h"
#include "defineNumero.h"
#include "jogada.h"
#include "ganhou.h"
#include "seletorDeNivel.h"

int main(){
   int matriz[9][9]={0};
   criaMatriz(matriz,nivel());
   // desenhaTabela(matriz);
   // do
   // {
   //  jogada(matriz);
   //  desenhaTabela(matriz);
   // } while (!ganhou(matriz));
   
   return 0;
}
