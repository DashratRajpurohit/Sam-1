#include<stdio.h>
int main(){
    int n=4;
    int count=n*(n+1)/2;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",count);
            count--;
            printf(" ");
            if(count<=9){
                printf(" ");  
            }
        }
        printf("\n");
    }
    return 0;
}