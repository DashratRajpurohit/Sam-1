#include<stdio.h>
int main(){
    for(int i = 5; i>=1; i--){
        for (int j = 5; j>=i; j--){
            printf("  ");
        }
        for(int k =1;k<=i*2-1; k++){
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}