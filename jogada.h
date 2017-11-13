int acertoEscolha()
{
   int x = 0;
   fflush(stdin);
   x = (int)getchar();
   fflush(stdin);
   return defineNumero(x);
}
int ver();

void jogada(int matriz[9][9], int n[9][9])
{
   int valor, x, y, escolha,jgd;

   do
   {
      printf("\n linha: ");
      x = acertoEscolha();
   } while (((x < 1) || (x > 9)));

   do
   {
      printf("\n coluna: ");
      y = acertoEscolha();
   } while (((y < 1) || (y > 9)));

   do
   {
      printf("\n valor: ");
      valor = acertoEscolha();
   } while (((valor < 1) || (valor > 9)));

   if (n[x-1][y-1] == 0)
   {
      if (matriz[x - 1][y - 1] == 0)
      {
         jgd=0;
         jgd=ver(matriz,x-1,y-1,valor);
         if(jgd==0){
         matriz[x - 1][y - 1] = valor;
         }
      }
      else if (matriz[x - 1][y - 1] > 0)
      {
         do
         {
            printf("Esse campo ja Possui valor \n");
            printf("Deseja alteralo mesmo assim? \n");
            printf("1-sim \n2-nao \n");
            escolha = acertoEscolha();
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
   }else
   {
      printf("Valor Fixo do Nivel nao e possivel fazer alteracao:\n");
      system("pause");
   }
   

}
