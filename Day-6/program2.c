#include<stdio.h>
int main() {
    long long binary = 0;
    int decimal = 0, base = 1, rem;

    printf("enter a binary number:  ");
    scanf("%11d", &binary);

    while(binary > 0){
        rem = binary % 10;
        decimal += rem * base;
        base *= 2;
        binary /= 10;
    }
    printf("Decimal = %d", decimal);
    return 0;
}
