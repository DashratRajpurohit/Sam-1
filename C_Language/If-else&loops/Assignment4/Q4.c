#include<stdio.h>
int main()
{

// Q4
// Write a program to input an integer (assumed between 100 and 999) and check if the sum of its 
// digits is divisible by the product of its digits (handle zero digits carefully to avoid division by zero).

int x;
scanf("%d",&x);

int d1=x/100;
int d2=(x/10)%10;
int d3=x%10;

int sum=d1+d2+d3;
int P=d1*d2*d3;

if(x>=100 && x<=999){
    if(P==0){
        printf("Product of digit is 0 \n so divide by 0 is not possible");
    }
    else if(sum%P==0){
        printf("Yes divisible");
    }
    else{
        printf("Not Divisible");
    }

}
else{
    printf("Invalid");
}

    return 0;
}