#include<stdio.h>
int main()
{
// Q6
// Write a program to input three floats as sides of a potential rectangle (length, width, diagonal) and check if it forms a valid rectangle (diagonal satisfies Pythagoras within a tolerance of 0.1). If valid:

// If length == width: print "Square"
// Else: print "Rectangle" Otherwise print "Invalid".
float a,b,c;

printf("Diagonal: ");
scanf("%f",&a);

printf("Length: ");
scanf("%f",&b);

printf("Width: ");
scanf("%f",&b);

if((a*a)>(b*b)+(c*c) && a>b && a>c){
    if(b=c){
        printf("Square");
    }
    else{
        printf("Rectangle");
    }

}
else{
    printf("Invalid");
}

    return 0;
}