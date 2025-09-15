#include <stdio.h>
int main()
{
    for (int i = 64; i <=68; i++)
    {
        for (int j =65; j <= i; j++)
        {
            printf("%c",j);
        }
        for (int k = i + 1; k >= 65; k--)
        {
            printf("%c",k);
        }

        printf("\n");
    }
    return 0;
}