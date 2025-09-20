#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 5-i; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}