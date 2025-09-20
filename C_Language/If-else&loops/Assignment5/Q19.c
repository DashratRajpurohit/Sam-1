// Q19. Write a program using a while loop to calculate the factorial of a given number.

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int c=1;
    int b=1;
    while(b<=a){
        c=c*b;
         
        b++;
    }
 printf("%d",c);


    return 0;
}
