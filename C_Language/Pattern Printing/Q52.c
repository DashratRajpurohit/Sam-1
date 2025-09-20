#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        for(int j=2;j<=6;j++){
            printf("%d",(i+j)%2);
            printf(" ");
        }
        printf("\n");
    }
}