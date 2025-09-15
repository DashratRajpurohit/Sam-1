//  Q16. Write a program using a while loop to print sum of numbers from 1 to 50.
#include<stdio.h>
int main()
{
    int a=1;
    int b=0;
    while(a<=50){
        b=b+a;
            
        
        a++;
    }
    printf("%d\n",b);


    return 0;
}