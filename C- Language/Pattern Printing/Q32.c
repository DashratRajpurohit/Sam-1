#include<stdio.h>
int main()
{
    int n=5;
    for(int i=1;i<=5; i++){
        for(int j=1; j<=i; j++){
            if(i==n || i==j || j==1){
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