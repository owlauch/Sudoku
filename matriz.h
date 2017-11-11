void ajustaNivel();
void desenhaTabela();
void criaMatriz(int mtr[9][9], int nivelSele)
{
   switch (nivelSele)
   {
   case 1:
      ajustaNivel(mtr, 45);
      break;
   case 2:
      ajustaNivel(mtr, 40);
      break;
   case 3:
      ajustaNivel(mtr, 35);
      break;
   case 4:
      ajustaNivel(mtr, 30);
      break;
   default:
      break;
   }
}

void ajustaNivel(int mtr[9][9], int x)
{
   time_t t;
   int contador = 0, linha = 0, coluna = 0;
   srand((unsigned)time(&t));

   do
   {
      linha = rand() % 9;
      coluna = rand() % 9;
      if (mtr[linha][coluna] == 0)
      {
         mtr[linha][coluna] = (rand() % 9) + 1;
         contador++;
      }
   } while (contador != x);

   desenhaTabela(mtr);
}
