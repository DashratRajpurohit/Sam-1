#include<stdio.h>
int main()
{
    int n=7;
    for(int i=1;i<=n; i++){
        for(int j=n; j>=i; j--){
            if(i==1 || j==i || j==n){
               printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    return 0;
}