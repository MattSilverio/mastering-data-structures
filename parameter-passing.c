#include<stdio.h>
#include<stdlib.h>

int add ( int a, int b){
    int sum;
    sum = a+b;

    return sum;
}

int add2(int * a, int * b){
    return *a + *b;
}


int main(){
    int num1 = 10, num2= 15, sum;

    sum = add(num1, num2);
    printf("A soma eh = %d\n", sum);

    sum = add2(&num1, &num2);
    printf("A soma eh = %d\n", sum);

    return 0;
}