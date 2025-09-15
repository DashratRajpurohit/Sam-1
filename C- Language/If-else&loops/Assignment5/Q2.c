//  Q2. Write a program using a for loop to print even numbers from 2 to 20.
#include<stdio.h>
int main()
{
    int a=0;
    for(a=1; a<=20; a++){
        if(a%2==0){
        printf("%d\n",a);
        }
    }


    return 0;
}