#include<stdio.h>

void maior(int m, int n){
    ++m;
    ++n;
    if(m > n){
        printf("%d\n", m);
    }else{
        printf("%d\n", n);
    }
}

void maiorPointer(int *pm, int *pn){
    ++*pm;
    ++*pn; 
    if(*pm > *pn){
        printf("%d\n", *pm);
    }else{
        printf("%d\n", *pn);
    }
}

int main(){
    int m,n,*pm = &m, *pn = &n;

    scanf("%d %d", &m, &n);
    // teste as duas funçoes comentando e descomentando outra
    // maior(m,n); 
    maiorPointer(&m, &n);
    printf("%d %d\n", m, n);

    return 0;
}