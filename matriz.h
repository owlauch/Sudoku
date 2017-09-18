#include <time.h> 

void criaMatriz(int mtr[9][9])
{
   srand(time(NULL));
   printf("%d \n",rand() % 9 + 1);   
    for(int i = 0; i < 9; i++){
       for(int j = 0; j < 9; j++){
          mtr[i][j]=0;
       }
    }
}
