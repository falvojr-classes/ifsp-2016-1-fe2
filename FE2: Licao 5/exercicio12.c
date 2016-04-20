#include<stdio.h>

int main()
{
 int i, j, soma, qtdDesejada, qtdPerfeitos = 0;
 printf("Quantidade de Numeros Perfeitos: ");
 scanf("%d", &qtdDesejada);
 for(i=0; qtdPerfeitos < qtdDesejada; i++)
 {
  soma = 0;
  for(j=1; j <= (i/2); j++)
  {
   if(i%j == 0) {
    soma += j;
   }
  }
  if (soma == i) {
   qtdPerfeitos++;
   printf("%d\n", i);
  }
 }
 getchar();
 return 0;
}
