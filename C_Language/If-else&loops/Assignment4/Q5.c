#include<stdio.h>
int main()
{
//  Q5   Write a program to input two floats representing coordinates (x, y) and determine the distance from origin:

// Distance <= 5: print "Close"
// Distance between 5 and 15: print "Medium"
// Else: print "Far" Use if–else–if (use sqrt() if available, or approximate with conditions).
float a,b;
printf("input cod. x&y\n");
scanf("%f %f",&a,&b);
float dis=((a*a)+(b*b));
if (dis<=5){
    printf("close");
}
else if (dis>5 && dis<15){
    printf("Medium");
}
else{
    printf("Far");
}




    return 0;
}