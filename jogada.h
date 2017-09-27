void jogada(int matriz [9][9]){
   int valor, x, y;
   do{
      printf("\n linha: ");
      fflush(stdin);
      x =(int) getchar();
      fflush(stdin);
      x= defineNumero(x);
   } while (((x<1) || (x>9)) );
   do{
      printf("\n coluna: ");
      fflush(stdin);
      y = (int)getchar();
      fflush(stdin);
      y= defineNumero(y);
   } while (((y<1) || (y>9)));
   do{
      printf("\n valor: ");
      fflush(stdin);
      valor = (int) getchar();
      fflush(stdin);
      valor = defineNumero(valor);
   } while (((valor<1) || (valor>9)) );
   printf("\n%d %d\n",x,y);
   matriz[x][y] = valor;
}