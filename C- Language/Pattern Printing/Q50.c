#include<stdio.h>
int main(){
    int count=15;
    for (int i=1;i<=5;i++){
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