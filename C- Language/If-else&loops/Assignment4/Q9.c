#include<stdio.h>
int main()
{
    int a,b,x=1;
    printf("Put value of a nad b\n");
    scanf("%d %d",&a,&b);
    

    if(b==0){
        x=1;
    }
    else if(b==1){
        x=a;
    }
      else if(b==2){
        x=a*a;
    }
      else if(b==3){
        x=a*a*a;
    }
      else if(b==4){
        x=a*a*a*a;
    }
      else if(b==5){
        x=a*a*a*a*a;
    }
    else{
        printf("Invalid Exponitial\n");
    }
    printf("a^b = %d\n",x);

    if(x<=1000 && x<=10000 && x%2==0){
        printf("Result is valid and even\n");
    }
    else{
        printf("Result is invalid");
    }
   


    return 0;
}