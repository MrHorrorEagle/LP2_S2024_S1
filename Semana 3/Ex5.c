//Exercício 5
#include <stdio.h>

int main(){
  int num;
  printf("Escreva um número inteiro: ");
  scanf("%d" , &num);
  int soma = 0;
  for(int i = 1; i <= num; i++){
    if(num%i == 0){
     soma += i;
    }
  }
  if(soma == (2*num)){
    printf("%d é um número inteiro perfeito.", num);
  }
  else{
    printf("%d NÃO é um número perfeito.", num);
  }
  return 0;
}