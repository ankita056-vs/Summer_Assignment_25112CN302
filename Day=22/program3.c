#include<stdio.h>

int main()
{
    char str[100], ch;
    int i = 0, count = 0;

    printf("enter a string: ");
    scanf("%s", str);

    printf("enter a character: ");
    scanf(" %c", &ch);

    while (str[i] != '\0')
    {
        if(str[i] == ch)
        {
            count++;
        }
        i++;
    }
    printf("frequency of %c = %d", ch, count);

    return 0;
}