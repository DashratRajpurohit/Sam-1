#include<stdio.h>
int main ()
{
    int n=5;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
          int top=i-1;
          int left=j-1;
          int bot=n-i;
          int right=n-j;  

          if(top<=bot && top<=left && top<=right){
            printf("%d",top+1);
          }
          else if(top>=bot && bot<=left && bot<=right){
            printf("%d",bot+1);
          }
          else if(left<=bot && top>=left && left<=right){
            printf("%d",left+1);
          }
          else if(right<=bot && right<=left && top>=right){
            printf("%d",right+1);
          }
        }
        printf("\n");
    }
}