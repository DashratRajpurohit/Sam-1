#include<stdio.h>
int main()
{
    int a,b,c,d,e,x;
    printf("enter your five sub. marks hear in this range (0-100)\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    x=(a+b+c+d+e)/5;

    if(x>=90){
        printf("Outstanding");
    }
    else if(x>=70 && x>50){
        printf("Consistent");
    }
    else if(x>=50){
        printf("Passable");
    }
    else{
        printf("Need Inprovement");
    }
   


    return 0;
}