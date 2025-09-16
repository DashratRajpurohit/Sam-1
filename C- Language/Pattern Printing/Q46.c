#include<stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        for(int j= ; j<=i; j++){
            if(j%2==1){
                printf("%d",j);
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}