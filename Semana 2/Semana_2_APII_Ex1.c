// Exercício 1

#include <stdio.h>

int main() {
  int a;
  int b;
  printf("Número 1: ");
  scanf("%d" , &a);
  printf("Número 2: ");
  scanf("%d" , &b);
  int soma = a + b;
  int subt = a - b;
  int mult = a * b;
  int div = a / b;
  printf("\nSoma: %d", soma);
  printf("\nSubtração: %d", subt);
  printf("\nMultiplicação: %d", mult);
  printf("\nDivisão: %d", div);
  return 0;
  //poderia resolver da seguinte forma:
  //printf("%d + %d = %d" , a , b , (a+b)); já somaria sem abrir uma variável de soma
}