#include<stdio.h>
int main()
{
    int n=4;
    for(int i=1;i<=n; i++){
        for(int j=1;j<=n;j++){
            if(i==n/2+1 || j==n/2+1){
                printf("%d",j);
            }
            else printf(" ");
        }
        printf("\n");
    }
}