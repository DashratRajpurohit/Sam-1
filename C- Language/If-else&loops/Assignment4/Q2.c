//    Q2
//    Write a program to input a float representing the pH value (0 to 14) and categorize 
//    it: acidic if <7, neutral if ==7, basic if >7 but <=10, strongly basic if >10. Use if-else-if.

#include<stdio.h>
int main()
{

float a;
scanf("%F",&a);

if(a>=0 && a<7){
    printf("Acidic");
}
else if(a==7){
    printf("Neutral");
}
else if(a>7 && a<=10){
    printf("Basic");
}
else if(a>10 && a<=14){
    printf("Strong Basic");
}
else{
    printf("invalid");
}

return 0;
}