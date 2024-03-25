//Exercício 10

#include <stdio.h>

int uniao(int v[], int n, int m[], int e){
  printf("[");
  for(int i = 0; i <= n; i++){
    for(int j = 0; j <= e; j++){
      if(v[i] == m[j]){
        
      }
      else{
      printf("%d", v[i]);
      }
    }
  }
  printf("]");
  return 0;
}


int main(){
  printf("Entre o número de elementos do vetor 1: ");
  int n;
  scanf("%d", &n);
  int vetor[n];
  for (int i = 0; i < n; i++) {
    printf("Valor para a posição %d: ", i);
    scanf("%d", &vetor[i]);
  }

  printf("Entre o número de elementos do vetor 2: ");
  int e;
  scanf("%d", &e);
  int vetor2[e];
  for (int i = 0; i < e; i++) {
    printf("Valor para a posição %d: ", i);
    scanf("%d", &vetor2[i]);
  }

  uniao(vetor, n, vetor2, e);

  return 0;  
}