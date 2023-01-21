#include<stdio.h>

int main(){
    int n, k_position, value, i ,counter = 0;
    scanf("%d %d", &n, &k_position);
    int arr[n];

    for(i = 0; i < n; i++){
        scanf("%d", &value);
        arr[i] = value;
    }

    for(i = 0; i < n; i++){
        if(arr[i] != 0 && arr[k_position - 1] <= arr[i]){
            counter++;
        }
    }
    printf("%d", counter);

    return 0;
}