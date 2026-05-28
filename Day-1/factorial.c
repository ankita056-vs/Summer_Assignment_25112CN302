#include <stdio.h>
int main() {
    int n;
     long long fact = 1;
     
    printf("enter a number: ");
    scanf("%d", &n);

    for(int i = 1 ; i <=n; i++){
        fact= fact*i;
    }
    printf("Factorial of %d = %11d",n, fact);
    return 0;
}