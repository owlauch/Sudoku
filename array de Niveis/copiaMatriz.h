void copiaMatriz(int mat1[9][9], int mat2[9][9])
{
   for (int i = 0; i < 9; i++)
   {
      for (int j = 0; j < 9; j++)
      {
         mat1[i][j] = mat2[i][j];
      }
   }
}