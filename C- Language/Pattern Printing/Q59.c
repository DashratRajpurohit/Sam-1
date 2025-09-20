#include<stdio.h>
int main()
{
    int n=5;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 && j>=2&&j<=4 || i==3 && j!=3 || i==5 && j>=2&&j<=4 || i==2 && j!=2&&j!=4 || i==4 && j!=2&&j!=4){
                printf(" ");
            }
            else{
                printf("%d",j);
            }
        }
        printf("\n");
    }
    return 0;
}