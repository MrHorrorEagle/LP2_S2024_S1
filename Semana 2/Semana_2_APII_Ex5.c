//Exercício 5

#include <stdio.h>
#include <math.h> 

int main(){
  float raio;
  printf("Digite o raio do círculo: ");
  scanf("%f", &raio);
  float area = (M_PI) * pow(raio, 2);
  printf("Um círculo com raio %.1f tem área igual a %.1f.", raio, area);
  return 0;
}