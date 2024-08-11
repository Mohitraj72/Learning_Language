#include <stdio.h>

int main()
{
    int row, col,n,m;
    printf("Enter the No of Row ");
    scanf("%d", &n);


    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= n+1 - row; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }

    return 0;
}