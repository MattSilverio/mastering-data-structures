#include<stdio.h>

int main(){
    int n = 25, *ptrn = &n;

    printf("%x %d\n", ptrn, *ptrn);

    *ptrn += 1;

    printf("%x %d", ptrn, *ptrn);

    return 0;
}