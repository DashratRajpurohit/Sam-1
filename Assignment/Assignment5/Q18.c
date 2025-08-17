// Q18. Write a program using a while loop to print all multiples of 7 up to 70.
#include<stdio.h>
int main()
{
    int a=1;
    while(a<=70){
        if(a%7==0){
            printf("%d\n",a);
        }
        a++;
    }


    return 0;
}