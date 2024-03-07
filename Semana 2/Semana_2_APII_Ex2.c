//Exercício 2

#include <stdio.h>
#include <math.h> // Biblioteca de matemática

int main(){
  float massa;
  float altura;
  printf("Massa em kg: ");
  scanf("%f" , &massa);
  printf("Altura em metros: ");
  scanf("%f" , &altura);
  float IMC = (massa) / (pow(altura, 2)); //pow = potência (x elevado a, número da potência)
  printf("O IMC de uma pessoa com peso %f kg e altura &f m é igual a %f.
 %f", massa, altura, IMC);
  return 0;
}