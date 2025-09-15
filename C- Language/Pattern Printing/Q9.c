#include <stdio.h>

int main()
{
   for(int i = 1; i<=5; i++){
       printf("\n");
       for(int j =0;j<i; j++){
           printf("%c",'A'+j);
       }
   }
    return 0;
}