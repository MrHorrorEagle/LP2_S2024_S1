//Exercício 4

#include <stdio.h>
#include <math.h>

int main(){
  float cat1;
  float cat2;
  printf("Cateto 1: ");
  scanf("%f", &cat1);
  printf("Cateto 2: ");
  scanf("%f", &cat2);
  float hip = sqrt(pow(cat1, 2) + pow(cat2, 2));
  printf("Um triângulo retângulo com lados %.1f e %.1f tem uma hipotenusa igual a %.1f.", cat1, cat2, hip);
  return 0;
}