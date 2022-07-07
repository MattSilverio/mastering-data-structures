#include<stdio.h>
#include<stdlib.h>

int numberOfOcurrenciesOfaChar(char c, char s[]){
    if(s[0] == '\0'){
        return 0;
    }else if(c == s[0]){
        return 1 + numberOfOcurrenciesOfaChar(c, ++s);
    }
    return numberOfOcurrenciesOfaChar(c,++s);
}

int main(){
    printf("%d", numberOfOcurrenciesOfaChar('a',"ana"));
    return 0;
}