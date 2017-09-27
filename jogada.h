void jogada(int matriz[9][9])
{
   int valor, x, y, escolha;
   do
   {
      printf("\n linha: ");
      fflush(stdin);
      x = (int)getchar();
      fflush(stdin);
      x = defineNumero(x);
   } while (((x < 1) || (x > 9)));
   do
   {
      printf("\n coluna: ");
      fflush(stdin);
      y = (int)getchar();
      fflush(stdin);
      y = defineNumero(y);
   } while (((y < 1) || (y > 9)));
   do
   {
      printf("\n valor: ");
      fflush(stdin);
      valor = (int)getchar();
      fflush(stdin);
      valor = defineNumero(valor);
   } while (((valor < 1) || (valor > 9)));
   if (matriz[x - 1][y - 1] == 0)
   {
      matriz[x - 1][y - 1] = valor;
   }
   else if (matriz[x - 1][y - 1] > 0)
   {
      do
      {
         printf("Esse campo ja Possui valor \n");
         printf("Deseja alteralo mesmo assim? \n");
         printf("1-sim \n2-nao \n");
         fflush(stdin);
         escolha = (int)getchar();
         fflush(stdin);
         escolha = defineNumero(escolha);
         if (escolha < 1 || escolha > 2)
         {
            printf("Escolha fora de escopo escolha entre '1' e '2' ");
         }

      } while (escolha < 1 || escolha > 2);
      if (escolha == 1)
      {
         matriz[x - 1][y - 1] = valor;
      };
   }
}