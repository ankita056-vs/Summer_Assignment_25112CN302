#include<stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int first, i;

    first = arr[0];

    for(i = 0; i < 4; i++){
        arr[i] = arr[i + 1];
    }
    arr[4] = first;

    printf("array after left rotation: ");

    for(i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}