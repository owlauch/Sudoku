
void desenhaTabela(int mtr[9][9]){
   system("cls");
   for(int i = 0; i < 9; i++){
      for(int j = 0; j < 9; j++){
         printf(" %d |",mtr[i][j]);
      }
      printf("\n");
   }
}