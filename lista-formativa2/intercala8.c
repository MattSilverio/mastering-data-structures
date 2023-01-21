#include<stdio.h>
#include<stdlib.h>

void merge_sort(int *res, int size_of_res, int *arr, int size_of_arr ){
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

void display_arr(int *res, int size_of_res){
  for(int i = 0; i < size_of_res; i++){
    printf("%d%c", res[i], (i == size_of_res - 1 ? '\n' : ' '));
  }
}

int res[800008], arr[100001];

int main(){
  
  int resSize = 0;

  for(int i = 0; i < 8; i++){
    int arrSize = 0;
    scanf(" %d", &arrSize);

    for(int j = 0; j < arrSize; j++){
      scanf(" %d", &arr[j]);
    }

    merge_sort(res,resSize, arr, arrSize);
    resSize += arrSize;
  }

  display_arr(res, resSize);

  return 0;
}