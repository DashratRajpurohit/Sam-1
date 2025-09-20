#include <stdio.h>

int main()
{
//    for (int i=1; i<=5; i++){
//      for(int j=4;j>=i; j--){
//         printf(" ",j);
//     }   
//         int a=i;
//         for(int k=1;k<=(i*2)-1;k++){
//             printf("%d",k);
//         }
   
//         printf("\n");
//    }

for(int i=1; i<=5; i++){
    for(int j=1; j<=5+i-1; j++){
        
        if(j<=5-i){
            printf("  ");
        }
        else{
            printf("%d ",j-(5-i));
            
        }
    }
    printf("\n");
}
    return 0;
}