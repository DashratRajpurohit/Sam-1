//  Q11. Write a program using a for loop to print all numbers divisible by 3 from 1 to 30.
#include<stdio.h>
int main()
{
   int a=0;
    for(a=1; a<=30; a++){
        if(a%3==0){
        printf("%d\n",a);
        }
    }




    return 0;
}