#include<stdio.h>
#include<stdlib.h>

int tamstring(char s[]){
    if(s[0] == '\0'){
        return 0;
    }

    return 1 + tamstring(&s[1]);
}

int main(){
    char str[50];
    scanf("%s" , &str);
    
    printf("%d", tamstring(str));

    return 0;
}