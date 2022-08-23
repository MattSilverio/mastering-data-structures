#include <stdio.h>
#include <stdlib.h>


void fun(int a[], int n){
    int  i;

    for(i=0; i < n; i++){
        a[i] = i;
        printf("%d\n", a[i]);
    }
}

//function to create an int array
int * createArray(int sizeOfArray){
    int *p;
    p = (int*) malloc(sizeOfArray * sizeof(int));

    return p;
}

int main(){

    int *newArray;
    int arrayLength = 5;
    newArray = createArray(arrayLength);

    fun(newArray,arrayLength);

    return 0;
}