#include<stdio.h>
int main()
{
    int n=4;
    int count=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<n+i;j++){
            
            if(i+j<=n){
                printf("   ");
            }
            else{
                 count++;
                printf("%d ",count);
                if(count<10){
               printf(" ");
                }
            }
        }
        
        printf("\n");
    }
}