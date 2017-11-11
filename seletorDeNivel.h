int nivel(){
   int x;
   do
   {
      printf("Selecione um nivel:\n");
      printf("1-Facil:\n");
      printf("2-Medio:\n");
      printf("3-Dificil:\n");
      printf("4-Infernal:\n");
      fflush(stdin);
      x = (int) getchar();
      x = defineNumero(x);
      if (x<1 || x>4){
         printf("nivel fora de Escopo selecione entre 1 a 4\n");
         system("pause");
         system("cls");
      }
   } while (x<1 || x>4);
   return x;
}