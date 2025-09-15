// Q14. Write a program using a while loop to print even numbers from 2 to 20.
#include<stdio.h>
int main()
{
    int a=2;
    while(a<=20){
        if(a%2==0){
            printf("%d\n",a);
        }
        a++;
    }


    return 0;
}
