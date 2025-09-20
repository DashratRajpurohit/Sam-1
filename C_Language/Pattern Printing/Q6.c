#include <stdio.h>

int main()
{
   for(int i = 1; i<=4; i++){
       printf("\n");
       for(int j =0;j<4; j++){
           printf("%c",'A'+j);
       }
   }
    return 0;
}