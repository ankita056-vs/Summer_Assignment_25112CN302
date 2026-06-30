#include<stdio.h>
int main()
{
    char str[100], maxChar;
    int i, j, count, max = 0;

    printf("enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        count = 0;

        for(j = 0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }
        if(count > max)
        {
            max = count;
            maxChar = str[i];
        }
    }
    printf("maximum occurring character = %c", maxChar);

    return 0;
}