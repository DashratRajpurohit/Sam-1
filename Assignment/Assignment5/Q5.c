//  Q5. Write a program using a for loop to print the multiplication table of a given number.
#include<stdio.h>
int main()
{
    int a;
    int b=0;
    scanf("%d",&a);
    for(b=1; b<=10; b++){
        printf("%d\n",b*a);
    }


    return 0;
}