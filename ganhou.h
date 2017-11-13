int ganhou(int x[9][9])
{
   int vetor[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
   for (int i = 0; i < 10; i++)
   {
      for (int j = 0; j < 10; j++)
      {
         if (x[i][j] == 0)
         {
            return 0;
         }
      }
   }
   return 0;
}
int ver(int mat[9][9], int linha, int coluna, int valor)
{
   int tem=0;
   for (int i = 0; i < 9; i++)
   {
      if (i != coluna)
      {
         if (mat[linha][i] == valor)
         {
            printf("Linha %d, coluna %d: o numero %d ja esta presente nesta linha;\n", linha,coluna, valor);
            system("pause");
            tem = 1;
         }
      }
      if(i!=linha){
         if(mat[i][coluna]==valor){
            printf("Linha %d, coluna %d: o numero %d ja esta presente nesta coluna;\n", linha,coluna, valor);
            system("pause");
            tem= 1;
         }
      }
   }
   return tem;
}
