void infernal(int x[9][9])
{
   int um[9][9] = {
       {0, 0, 0, 8, 0, 0, 0, 7, 5},
       {7, 0, 2, 0, 0, 0, 4, 0, 6},
       {0, 5, 0, 4, 0, 0, 3, 0, 0},
       {0, 0, 5, 2, 9, 0, 0, 0, 0},
       {2, 0, 0, 0, 0, 5, 0, 0, 0},
       {0, 0, 4, 3, 7, 0, 0, 0, 0},
       {0, 7, 0, 3, 0, 0, 5, 0, 0},
       {4, 0, 9, 0, 0, 0, 2, 0, 3},
       {0, 0, 0, 9, 0, 0, 0, 6, 7}};
   int dois[9][9] = {
       {3, 0, 0, 0, 0, 0, 0, 0, 9},
       {0, 2, 0, 8, 0, 3, 0, 5, 0},
       {0, 0, 6, 7, 0, 4, 8, 0, 0},
       {0, 0, 5, 0, 0, 0, 2, 0, 0},
       {0, 1, 0, 0, 0, 0, 0, 4, 0},
       {0, 0, 4, 0, 7, 0, 3, 0, 0},
       {0, 0, 0, 6, 0, 7, 0, 0, 0},
       {9, 7, 0, 0, 0, 0, 0, 6, 2},
       {5, 0, 0, 2, 0, 9, 0, 0, 8}};
   int tres[9][9] = {
       {3, 0, 0, 0, 6, 0, 1, 0, 2},
       {0, 0, 0, 9, 0, 0, 3, 0, 0},
       {2, 1, 4, 0, 0, 0, 9, 0, 0},
       {0, 0, 0, 8, 0, 3, 0, 7, 0},
       {4, 0, 0, 0, 0, 0, 0, 0, 5},
       {0, 8, 0, 5, 0, 6, 0, 0, 0},
       {0, 0, 1, 0, 0, 0, 6, 9, 4},
       {0, 0, 7, 0, 0, 2, 0, 0, 0},
       {9, 0, 5, 0, 8, 0, 0, 0, 1}};
   int quatro[9][9] = {
       {0, 0, 0, 1, 0, 0, 0, 0, 2},
       {0, 0, 2, 0, 5, 8, 0, 0, 0},
       {0, 0, 6, 2, 0, 9, 0, 0, 3},
       {2, 0, 5, 9, 0, 0, 0, 6, 4},
       {0, 0, 0, 0, 0, 0, 0, 0, 0},
       {1, 6, 0, 0, 0, 4, 8, 0, 5},
       {3, 0, 0, 4, 0, 7, 5, 0, 0},
       {0, 0, 0, 8, 1, 0, 3, 0, 0},
       {4, 0, 0, 0, 0, 2, 0, 0, 0}};
   int cinco[9][9] = {
       {0, 0, 7, 0, 0, 0, 8, 0, 0},
       {0, 6, 0, 0, 0, 7, 0, 0, 9},
       {0, 0, 0, 2, 3, 0, 0, 6, 0},
       {0, 0, 6, 7, 2, 0, 9, 0, 0},
       {0, 5, 0, 0, 0, 0, 0, 1, 0},
       {0, 0, 4, 0, 9, 5, 6, 0, 0},
       {0, 4, 0, 0, 5, 3, 0, 0, 0},
       {5, 0, 0, 8, 0, 0, 0, 3, 0},
       {0, 0, 2, 0, 0, 0, 1, 0, 0}};
   int seis[9][9] = {
       {0, 0, 2, 0, 0, 3, 0, 6, 0},
       {1, 0, 0, 0, 4, 0, 2, 0, 0},
       {0, 0, 0, 0, 0, 0, 0, 4, 1},
       {8, 0, 7, 0, 0, 1, 0, 5, 0},
       {2, 0, 0, 9, 0, 4, 0, 0, 8},
       {0, 4, 0, 3, 0, 0, 1, 0, 2},
       {7, 9, 0, 0, 0, 0, 0, 0, 0},
       {0, 0, 4, 0, 3, 0, 0, 0, 7},
       {0, 2, 0, 5, 0, 0, 3, 0, 0}};
   int sete[9][9] = {
       {0, 7, 5, 0, 0, 0, 9, 3, 0},
       {9, 0, 0, 5, 0, 1, 0, 0, 7},
       {3, 2, 0, 0, 7, 0, 0, 5, 4},
       {0, 9, 0, 7, 0, 3, 0, 4, 0},
       {1, 0, 7, 0, 0, 0, 3, 0, 2},
       {0, 0, 0, 0, 2, 0, 0, 0, 0},
       {0, 0, 3, 8, 1, 2, 5, 0, 0},
       {0, 1, 0, 0, 0, 0, 0, 2, 0},
       {0, 0, 2, 0, 5, 0, 4, 0, 0}};
   int oito[9][9] = {
       {0, 5, 0, 3, 0, 0, 2, 0, 0},
       {0, 0, 0, 0, 2, 0, 0, 5, 0},
       {0, 1, 0, 0, 0, 0, 0, 0, 6},
       {0, 0, 2, 0, 0, 7, 4, 0, 0},
       {3, 0, 0, 9, 0, 2, 0, 0, 7},
       {0, 0, 9, 6, 0, 0, 5, 0, 0},
       {7, 0, 0, 0, 0, 0, 0, 9, 0},
       {0, 6, 0, 0, 8, 0, 0, 0, 0},
       {0, 0, 1, 0, 0, 5, 0, 2, 0}};
   int nove[9][9] = {
       {0, 3, 0, 0, 0, 0, 6, 2, 0},
       {0, 0, 0, 0, 0, 2, 0, 0, 1},
       {2, 0, 4, 0, 0, 0, 3, 9, 0},
       {3, 0, 1, 4, 0, 6, 0, 0, 0},
       {0, 0, 0, 9, 1, 0, 0, 0, 0},
       {6, 0, 9, 8, 0, 5, 0, 0, 0},
       {7, 0, 6, 0, 0, 0, 4, 5, 0},
       {0, 0, 0, 0, 0, 9, 0, 0, 8},
       {0, 1, 0, 0, 0, 0, 7, 6, 0}};
   int dez[9][9] = {
      {0, 7, 0, 0, 3, 0, 0, 1, 0},
      {3, 2, 1, 7, 0, 0, 0, 0, 8},
      {4, 0, 9, 0, 0, 2, 0, 0, 0},
      {0, 0, 2, 1, 0, 3, 0, 0, 0},
      {0, 0, 0, 0, 7, 0, 0, 0, 0},
      {0, 0, 0, 6, 0, 4, 8, 0, 0},
      {0, 0, 0, 3, 0, 0, 1, 0, 7},
      {9, 0, 0, 0, 0, 1, 3, 8, 2},
      {0, 3, 0, 0, 6, 0, 0, 9, 0}
   };
}