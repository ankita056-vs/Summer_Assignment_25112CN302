#include<stdio.h>
int main() {
    int n, i, prime = 0;

    printf("enter a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++) {
        while(n % i == 0) {
            prime = i;
            n = n / i;
        }
    }
    printf("Largest prime factor = %d", prime);

    return 0;
}