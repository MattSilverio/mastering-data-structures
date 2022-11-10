#include<stdio.h>

void insertion(int arr[], int n){
    int i,j,temp;

    for(i = 1; i < n; i++){
        j = i - 1;
        temp = arr[i];
        while(j > -1 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = temp;
    }
}


int main(){

    int arr[] = {9,8,6,2,3,1}, n = 6;

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    insertion(arr, n);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }


    return 0;
}