#include <stdio.h>
int divisiveis(int arr[], int tam, int x){
  if(tam > 0){
    if(arr[tam]%x == 0){
      return 1 + divisiveis(arr, tam-1, x);
    }
    else{
      return divisiveis(arr, tam-1, x);
    }
  }
  else{
    return 0;
  }
}

int main(void) {
  int arr[] = {1,2,3,4,5,6,7,8,9};
  printf("%d\n", divisiveis(arr, 9, 4));
  return 0;
}