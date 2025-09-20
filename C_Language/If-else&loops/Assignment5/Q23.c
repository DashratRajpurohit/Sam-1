// Q23. Write a program using a while loop to count down from a given number to 1.
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    int b=a;
    while(b>=1){
        printf("%d\n",b);
        b--;
    }


    return 0;
}
