#include<stdio.h>
int main()
{
    char str[100], rev[100];
    int i = 0, j = 0, length = 0, flag = 1;

    printf("enter a string: ");
    scanf("%s", str);

    while (str[length] != '\0')
    {
        length++;
    }
    for(i = length - 1; i >= 0; i--)
    {
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0';

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != rev[i])
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
      printf("palindrome string");
    else
      printf("not a palindrome string");

     return 0;
} 