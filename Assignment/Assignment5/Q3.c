//  Q3. Write a program using a for loop to print odd numbers from 1 to 19.
#include<stdio.h>
int main()
{
      int a=0;
    for(a=1; a<=19; a++){
        if(a%2!=0){
        printf("%d\n",a);
        }
    }



    return 0;
}