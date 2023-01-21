// Descubra (e imprima) o valor da maior variável entre m e n, através da função maior, cujos parâmetros devem os ponteiros para m e n.

// O que aconteceria se você incrementasse os valores dos parâmetros, dentro da função? Quais seriam seus valores dentro da função? E fora dela? Teste e explique por quê.

#include <stdio.h>

int maior(int *ptr_m, int *ptr_n){
  if(*ptr_m > *ptr_n)
    return *ptr_m;
 
  return *ptr_n;

}

void incremento(int *ptr_m, int *ptr_n){
  *ptr_m+= 1;
  *ptr_n+= 1;

  printf("Incremento de M : %d\nIncremento de N: %d\n", *ptr_m, *ptr_n);
}

int main(){
  int m, n , *ptr_m = &m, *ptr_n = &n;
  printf("Digite os valores de m e n como inteiros e separados por somente um espaco\n");
  scanf("%d %d", &m, &n);

  // int maiorVariavel = maior(ptr_m, ptr_n);
  // printf("%d", maiorVariavel);

  incremento(ptr_m, ptr_n);
  printf("Valor de M: %d\nValor de N: %d", m, n);

  return 0;
}