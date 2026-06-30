#include<stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j, temp;

    printf("enter first string: ");
    scanf("%s", str1);

    printf("enter second string: ");
    scanf("%s", str2);

    for(i = 0; str1[i] != '\0'; i++)
    {
        for(j = i + 1; str1[j] != '\0'; j++)
        {
            if(str1[i] > str1[j])
            {
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }
    }
    for(i = 0; str2[i] != '\0'; i++)
    {
        for(j = i + 1; str2[j] != '\0'; j++)
        {
            if(str2[i] > str2[j])
            { 
                temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }
    i = 0;

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            printf("not anagram");
            return 0;
        }
        i++;
    }

    printf("anagram");

    return 0;

}

