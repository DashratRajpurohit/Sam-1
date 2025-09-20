#include<stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            if(i==1 && j>=2&&j<=4 || i==3 && j!=3 || i==5 && j>=2&&j<=4 || i==2 && j!=2&&j!=4 || i==4 && j!=2&&j!=4){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}