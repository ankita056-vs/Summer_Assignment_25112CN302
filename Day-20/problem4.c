#include<stdio.h>
int main()
{
    int a[10][10], i, j, r, c, sum;

    printf("enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("enter matrix:\n");
    for(i = 0; i < r; i++)
      for(j = 0; j < c; j++)
        scanf("%d", &a[i][j]);

    printf("column-wise sum:\n");
    
    for(j = 0; j < c; j++){
        sum = 0;
        for(i = 0; i < r; i++)
           sum += a[i][j];

        printf("column %d = %d\n", j+1, sum);
    }
    return 0;
}   