#include<stdio.h>
int main ()
{
    for(int i=5; i>=1;i--){
        for(int j=5; j>=i; j--){
            printf(" ");
        }
        {
            for(int k=1; k<=i*2-1; k++){
                if(i==2 && k==2 || i==3 && (k>=2 && k<=4) || i==4 && (k>=2 && k<=6)){
                    printf(" ");
                }
                else{
                    printf("*");
                }
                
            }
        }
        printf("\n");
    }
    return 0;
}