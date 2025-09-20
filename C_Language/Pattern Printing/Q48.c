#include<stdio.h>
int main()
{ int countr=0;
    for(int i=1; i<=4; i++){
        for(int j= 1; j<=4; j++){
            countr++;
            printf("%d",countr);
            if(countr<=8) {
            printf(" ");}
            
           
           printf(" ");
        }
        printf("\n");
    }
    return 0;
}