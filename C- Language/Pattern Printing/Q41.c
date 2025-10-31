#include<stdio.h>
int main ()
{
    int n=5;
    for(int i=n; i>=1;i--){
        for(int j=n; j>=i; j--){
            printf(" ");
        }
        {
            for(int k=1; k<=i*2-1; k++){
                if(k==1 || i==n  || k==i*2-1 ){
                    printf("*");
                }
                else{
                    printf(" ");
                }
                
            }
        }
        printf("\n");
    }
    return 0;
}