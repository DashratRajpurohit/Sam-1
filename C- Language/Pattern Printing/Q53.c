#include<stdio.h>
int main()
{
    int count=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            
            if(i+j<=5){
                printf("0");
            }
            else{
                printf("%d",count);
            }
        }
        
        printf("\n");
    }
}