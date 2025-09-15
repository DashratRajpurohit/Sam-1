#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= 4-i; k++)
        {
            printf("%c",'A'+k);
        }
        printf("\n");
    }
    return 0;
}