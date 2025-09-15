#include <stdio.h>

int main()
{
   for (int i=1; i<=5; i++){
     for(int j=4;j>=i; j--){
        printf(" ",j);
    }
        for(int k=0;k<i;k++){
            printf("%c",'A'+k);
        }
   
        printf("\n");
   }
    return 0;
}