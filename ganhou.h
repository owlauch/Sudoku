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
int verquadrate(int mat[9][9], int c1, int c2, int l1, int l2, int valor)
{
   for (int i = l1; i < l2; i++)
   {
      for (int j = c1; j < c2; j++)
      {
         if (mat[i][j] == valor)
         {
            return 1;
         }
      }
   }
}
void mensagemRegiao(int linha, int coluna, int valor)
{
   printf("Linha %d, coluna %d: o numero %d ja esta presente nesta regiao \n", linha, coluna, valor);
   system("pause");
}
int quadrante(int mat[9][9], int valor, int linha, int coluna)
{
   int result = 0;
   if (linha < 3)
   {
      if (coluna < 3)
      {
         result = verquadrate(mat, 0, 3, 0, 3, valor);
         if (result == 1)
         {
            mensagemRegiao(linha,coluna,valor);
         }
         return result;
      };
      if (coluna > 3 && coluna < 6)
      {
         result = verquadrate(mat, 4, 6, 0, 3, valor);
         if (result == 1)
         {
            mensagemRegiao(linha,coluna,valor);
         }
         return result;
      };
      if (coluna > 6 && coluna < 9)
      {
         result = verquadrate(mat, 7, 9, 0, 3, valor);
         if (result == 1)
         {
            mensagemRegiao(linha,coluna,valor);
         }
         return result;
      };
   };
   if (linha > 3 && linha < 6)
   {
      if (coluna < 3)
      {
         result = verquadrate(mat, 0, 3, 4, 6, valor);
         if (result == 1)
         {
            mensagemRegiao(linha,coluna,valor);
         }
         return result;
      };
      if (coluna > 3 && coluna < 6)
      {
         result = verquadrate(mat, 4, 6, 4, 6, valor);
         if (result == 1)
         {
            mensagemRegiao(linha,coluna,valor);
         }
         return result;
      };
      if (coluna > 6 && coluna < 9)
      {
         result = verquadrate(mat, 7, 9, 4, 6, valor);
         if (result == 1)
         {
            mensagemRegiao(linha,coluna,valor);
         }
         return result;
      };
   }
   if (linha > 6 && linha < 9)
   {
      if (coluna < 3)
      {
         result = verquadrate(mat, 0, 3, 7, 9, valor);
         if (result == 1)
         {
            mensagemRegiao(linha,coluna,valor);
         }
         return result;
      };
      if (coluna > 3 && coluna < 6)
      {
         result = verquadrate(mat, 4, 6, 7, 9, valor);
         if (result == 1)
         {
            mensagemRegiao(linha,coluna,valor);
         }
         return result;
      };
      if (coluna > 6 && coluna < 9)
      {
         result = verquadrate(mat, 7, 9, 7, 9, valor);
         if (result == 1)
         {
            mensagemRegiao(linha,coluna,valor);
         }
         return result;
      };
   }
}
int ver(int mat[9][9], int linha, int coluna, int valor)
{
   int tem = 0;
   for (int i = 0; i < 9; i++)
   {
      if (i != coluna)
      {
         if (mat[linha][i] == valor)
         {
            printf("Linha %d, coluna %d: o numero %d ja esta presente nesta linha;\n", linha+1, coluna+1, valor);
            system("pause");
            tem = 1;
         }
      }
      if (i != linha)
      {
         if (mat[i][coluna] == valor)
         {
            printf("Linha %d, coluna %d: o numero %d ja esta presente nesta coluna;\n", linha+1, coluna+1, valor);
            system("pause");
            tem = 1;
         }
      }
   }
   tem = quadrante(mat, valor, linha, coluna);
   return tem;
}
