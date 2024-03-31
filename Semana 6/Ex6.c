#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int soma(int n, int m, int a[n][m], int b[n][m], int c[n][m]){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      c[i][j] = a[i][j] + b[i][j];
    }
  } 
}

int main(){
  int m;
  int n;
  printf("Escolha o número de linhas: ");
  scanf("%d", &n);
  printf("\nEscolha o número de colunas: ");
  scanf("%d", &m);
  int a[n][m];
  int b[n][m];
  int c[n][m];
  srand(time(NULL));
  printf("\nMATRIZ A\n");
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      a[i][j] = rand()%100+1;
      printf("%d ", a[i][j]);
      if((j+1)%m == 0){
        printf("\n");
      }
    }
  }

  printf("\nMATRIZ B\n");
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      b[i][j] = rand()%100+1;
      printf("%d ", b[i][j]);
      if((j+1)%m == 0){
        printf("\n");
      }
    }
  }

  printf("\nSOMA DAS MATRIZES A E B (MATRIZ C)\n");
  soma(n,m,a,b,c);
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      printf("%d ", c[i][j]);
      if((j+1)%m == 0){
        printf("\n");
      }
    }
  }
  return 0;
}