#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int k = i + 1; k >= 1; k--)
        {  
            printf("%d", k);
        }

        printf("\n");
    }
    return 0;
}