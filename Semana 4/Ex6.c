//Exercício 6

#include <stdio.h>
#include <math.h>

float math(int n){
  float f = 0;
  for(int k = 1 ; k <= n ; k++){
    f += (k / pow(k, 2)) * pow(-1 , k+1);
  }
  return f;
}

int main(){
  printf("Digite um número inteiro: ");
  int n;
  scanf("%d", &n);
  printf("O resultado da função é de %f", math(n));
  return 0;
}