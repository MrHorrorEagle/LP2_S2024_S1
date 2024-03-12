//Exercício 3 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(NULL));
  int palpite;
  int sorteio = 1 + rand()%100;
  int tentativas = 1;

  printf("Digite um valor: \n");
  scanf("%d", &palpite);
  
  while(tentativas != 5){
    if(palpite != sorteio){
      if((palpite > 100) || (palpite < 1)){
        printf("Digite um número no intervalo de 1 a 100: \n");
        scanf("%d", &palpite);
      } 
  
      if((palpite > sorteio) && (palpite < 101)){
        printf("Você chutou muito alto! Tente novamente: \n");
        scanf("%d", &palpite);
        tentativas++;
      }
  
      if((palpite < sorteio) && (palpite > 0)){
        printf("Você chutou muito baixo! Tente novamente: \n");
        scanf("%d", &palpite);
        tentativas++;
        }
    }  
    if(sorteio == palpite){
      tentativas++;
      printf("Você acertou! Número de tentativas: %d \n", tentativas);
    }
  }
  if(tentativas == 5){
    printf("Número de tentativas excedido, o número correto é: %d\n", sorteio);
  }
  
  return 0;
}