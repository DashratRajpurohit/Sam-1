#include<stdio.h>
int main()
{ int countr='A';
    for(int i=1; i<=4; i++){
        for(int j= 1; j<=4; j++){
           
            printf("%c",countr);
            countr++;
           printf(" ");
        }
        printf("\n");
    }
    return 0;
}