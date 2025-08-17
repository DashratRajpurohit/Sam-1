// Q21. Write a program using a while loop to print numbers from 1 to a given number entered by the user.4
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
     
    int b=1;
    while(b<=a){
        printf("%d\n",b);
        b++;
    }


    return 0;
}
