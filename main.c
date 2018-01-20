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
#include "array de Niveis/facil.h"
#include "array de Niveis/medio.h"
#include "array de Niveis/dificil.h"
#include "array de Niveis/infernal.h"
#include "array de Niveis/copiaMatriz.h"

int main(){
   int matriz[9][9]={0}, n[9][9]={0};
   criaMatriz(matriz,nivel());
   copiaMatriz(n,matriz);
   desenhaTabela(matriz);
   do
   {
    jogada(matriz,n);
    desenhaTabela(matriz);
   } while (!ganhou(matriz));
   
   return 1;
}
