#include<stdio.h>
int main()
{ int countr=0;
    for(int i=1; i<=5; i++){
        for(int j= 1; j<=i; j++){
            countr+=2;
            printf("%d",countr);
           
           printf(" ");
        }
        printf("\n");
    }
    return 0;
}