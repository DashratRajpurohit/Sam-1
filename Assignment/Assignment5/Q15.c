// Q15. Write a program using a while loop to print odd numbers from 1 to 19.
#include<stdio.h>
int main()
{
    int a=1;
    while(a<=19){
        if(a%2!=0){
            printf("%d\n",a);
        }
        a++;
    }


    return 0;
}
