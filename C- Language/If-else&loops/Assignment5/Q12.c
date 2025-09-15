// Q12. Write a program using a for loop to calculate the factorial of a given number.
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int c=1;

    for(int b=1; b<=a;b++){
        c=c*b;
    }
     printf("Factorial =%d\n",c);


    return 0;
}