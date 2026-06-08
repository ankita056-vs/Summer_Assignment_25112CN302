#include<stdio.h>

int armstrong(int n)
{
    int sum = 0, rem, temp = n;

    while(n > 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }
    if(sum == temp)
      return 1;
    else
      return 0;
}
int main()
{
    int num;

    printf("enter a number: ");
    scanf("%d", &num);

    if(armstrong(num))
       printf("armstrong number");
    else
       printf("not armstrong number");
    return 0;
}