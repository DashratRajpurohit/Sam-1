#include<stdio.h>
int main()
{
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=2;j<=n+1;j++){
            printf("%d   ",(i+j)%2);
        }
        printf("\n");
    }
}