#include<stdio.h>
int main()
{ int countr=1;
    for(int i=1; i<=5; i++){
        for(int j= 1; j<=i; j++){
            printf("%d",countr);
           countr+=2;
           printf(" ");
        }
        printf("\n");
    }
    return 0;
}