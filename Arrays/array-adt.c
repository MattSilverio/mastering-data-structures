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

int main(){
    Array arr = {{2,3,4,5,6}, 10 ,5};

    insert(&arr, 3 , 10);
    display(arr);
    printf("%d %d", arr.length, arr.size);
    return 0;
}