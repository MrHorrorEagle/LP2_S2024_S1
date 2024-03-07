//Exercício 3

#include <stdio.h> 

int main(){
  float Celsius;
  printf("Temperatura em Celsius: ");
  scanf("%f" , &Celsius);
  float Fahreinheit = (9.0/5.0) * Celsius + 32;
  printf("Uma temperatura de %.1f graus Celsius equivale a %.1f graus Fahrenheit.", Celsius , Fahreinheit); //%.1f 1 casa depois da vírgula do float
  return 0;
}