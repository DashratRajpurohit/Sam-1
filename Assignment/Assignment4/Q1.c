 // Q1
    // Write a program to input three integers and check if their product is divisible 
    // by 6 but not by 9. If yes, print "Special", else print "Normal".
    
    #include <stdio.h>
    int main()
    {
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
int d=a*b*c;
if(d%6==0 && d%9!=0){
    printf("spacil");
}
else{
    printf("normal");
}
return 0;
    }