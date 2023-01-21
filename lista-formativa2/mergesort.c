#include <stdio.h>
#include <stdlib.h>

void display_arr(int *res, int size_of_res){
  for(int i = 0; i < size_of_res; i++){
    printf("%d%c", res[i], (i == size_of_res - 1 ? '\n' : ' '));
  }
}

void merge(int *res, int size_of_res, int *arr, int size_of_arr ){
  int *aux = (int *)malloc((size_of_res + size_of_arr) * sizeof(int));

  int i = 0,j = 0,k = 0;

  while(i < size_of_res && j < size_of_arr){
    if(res[i] <= arr[j]){
      aux[k++] = res[i++];
    }else{
      aux[k++] = arr[j++];
    }
  }

  while(i < size_of_res){
    aux[k++] = res[i++];
  }
  while(j < size_of_arr){
    aux[k++] = arr[j++];
  }

  for(i = 0, j = 0; i < (size_of_arr + size_of_res); i++, j++){
    res[i] = aux[j];
  }

  free(aux);
}

void mergesort(int *arr, int size)
{
    if (size < 2) return;
    int middle = size / 2;
    mergesort(arr, middle);
    mergesort(&arr[middle], size - middle);
    merge(arr, middle, arr + middle, size - middle);
}

int arr[100001];

int main()
{
    int resSize = 0;
    char c = 0;
    while(c != '\n'){
      scanf("%d%c", &arr[resSize], &c);
      resSize++;
    }
      

    mergesort(arr, resSize);
    display_arr(arr, resSize);

    return 0;
}