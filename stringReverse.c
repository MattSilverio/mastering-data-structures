#include<stdio.h>
#include<stdlib.h>

void reverse(char s[]){
    if(s[0] != '\0'){
        reverse(s + 1);
        printf("%c", s[0]);
    }
}

int main(){
    reverse("Matheus");
    return 0;
}