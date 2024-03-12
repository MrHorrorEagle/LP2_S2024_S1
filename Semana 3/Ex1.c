// Exercício 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(NULL));
  int palpite;
  int sorteio = 1 + rand()%100;
  printf("Digite um valor: \n");
  scanf("%d", &palpite);
  while((palpite > 100) || (palpite < 0)){
    printf("Digite um número no intervalo de 1 a 100: \n");
    scanf("%d", &palpite);
  } 
  if(palpite > sorteio){
    printf("Você chutou muito alto! O valor correto é %d.", sorteio);
  }
  else if(palpite < sorteio){
    printf("Você chutou muito baixo! O valor correto é %d.", sorteio);
    }
  else{
    printf("Você acertou!");
  }
  return 0;
}