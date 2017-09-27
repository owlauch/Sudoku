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
#include "nivel.h"

int main(){
   int matriz[9][9],nivelSelecionado;
   nivelSelecionado = nivel();
   criaMatriz(matriz, nivelSelecionado);
   desenhaTabela(matriz);
   do
   {
    jogada(matriz);
    desenhaTabela(matriz);
   } while (!ganhou());
   
   return 0;
}
