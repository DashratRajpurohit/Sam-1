#include <stdio.h>

int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}