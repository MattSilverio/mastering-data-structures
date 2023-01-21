#include <stdio.h>
#include <stdlib.h>

struct Array{
    int A[10];
    int size;
    int length;
};

typedef struct Array Array;

void display(Array arr){
    int i;
    printf("\nElements are\n");
    for(i = 0; i < arr.length; i++){
        printf("%d ", arr.A[i]);
    } 
}

void append(Array *arr, int integerToAppend){
    if(arr->length < arr->size){
        arr->A[arr->length++]= integerToAppend;
    }
}

void insert(Array *arr, int index, int integerToInsert){
    int i;
    if(index >= 0 && index <= arr->length){
        for(i = arr->length; i > index; i--){
            arr->A[i] = arr->A[i-1];
        }

        arr->A[index] = integerToInsert;
        arr->length++;
    }
}

int get(Array arr, int index){
    if(index>=0 && index<arr.length){
        return arr.A[index];
    }

    return -1;
}

void set(Array *arr, int index, int element){
    if(index>=0 && index<arr->length){
        arr->A[index] = element;
    }
}

int max(Array arr){
    int max = arr.A[0];
    int i;
    for(i = 1; i< arr.length; i++){
        if(arr.A[i] > max){
            max = arr.A[i];
        }
    }

    return max;
}

int sum(Array arr){
    int s=0;
    int i;
    for(i= 0; i<arr.length;i++){
        s+= arr.A[i];
    }

    return s;
}

float average(Array arr){
    return (float)sum(arr)/arr.length;
}

void reverse(Array * arr){
    int *B;
    int i,j;

    B = (int *)malloc(arr->length*sizeof(int));
    for(i=arr->length -1, j=0; i>= 0; i--,j++){
        B[j]= arr->A[i];
    }

    for(i=0; i< arr->length; i++){
        arr->A[i] = B[i];
    }
}

int min(Array arr){
    int min = arr.A[0];
    
    for(int i = 1; i < arr.length; i++){
        if(arr.A[i] < min){
            min = arr.A[i];
        }
    }
    return min;
}

int main(){
    Array arr = {{2,3,4,5,6}, 10 ,5};

    display(arr);
    reverse(&arr);
    display(arr);
  
    return 0;
}