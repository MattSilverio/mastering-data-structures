#include<stdio.h>
#include<stdlib.h>

int baseExpoente(int b, int e){
    if(e == 0 ){
        return 1;
    }else if(e == 1){
        return b;
    }

    return b*baseExpoente(b, e-1);


}

int main(){
    
    return 0;
}