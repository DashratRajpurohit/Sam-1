#include<stdio.h>
int main()
{
// Q3
// Write a program to input four integers and find the second largest among them using nested if-else statements.

int a,b,c,d;
printf("Enter any Four Digit:\n");
scanf("%d %d %d %d",&a,&b,&c,&d);

    if((a>b && a>c && a<d) || (a<c && a>b && a>d) || (a<b && a>c && a>d)){
    printf("%d is second Large",a);
}
else if((b>a && b>c && b<d) || (b>d && b>a && b<c) || (b>c && c>d && c<a)){
    printf("%d is second Large",b);
}
else if((c>d && c>b && c<a) || (c>a && c>d && c<b) || (c>b && c>a && c<d)){
    printf("%d is second Large",c);
}
else if((d>a && d>b && d<c) || (d>c && d>a && d<b) || (d>b && d>c && d<a)){
    printf("%d id second Large",d);
   
}


else{
    printf("Invalid");
}
return 0;
}

