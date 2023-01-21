#include <stdio.h>

void swap(int *px, int *py){
    int temp = *px;
    *px = *py;
    *py = temp;
    printf("var a = %d e var b = %d\n", *px, *py);
}

int main(){
    int a =2 ,b = 3;

    scanf("%d %d", &a, &b);
    printf("var a = %d e var b = %d\n", a, b);
    swap(&a,&b);

    return 0;
}