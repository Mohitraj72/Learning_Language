#include <stdio.h>

int main()
{
    int a, b, c;

    for (a = 1; a <= 5; a++)
    {
        // Print spaces before the stars
        for (b = 1; b <= a - 1; b++)
        {
            printf(" ");
        }
        
        // Print stars
        for (c = 1; c <= 2 * (5-a) - 1; c++)
        {
            printf("*");
        }
        
        // Move to the next line after each row of stars
        printf("\n");
    }

    return 0;
}
