#include<stdio.h>
int main()
{
    int count=0;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4+i-1;j++){
            
            if(i+j<=4){
                printf("  ");
            }
            else{
                 count++;
                printf("%d",count);
                if(count<10){
               printf(" ");
                }
            }
        }
        
        printf("\n");
    }
}