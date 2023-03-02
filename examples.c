/*#include <stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    //declare and initialise variables
    float a, b, c, area , S;
    printf("\n enter the lengths of the three sides of the triangle : ");
    scanf("%f %f %f",&a,&b,&c);
    S = (a+b+c)/2;
    // sqrt is a mathematical function defined in math.h header file
    area = sqrt(S*(S-a)*(S-b)*(S-c));
    printf("\n Area=%f", area);
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int rad;
    float PI=3.14, ci;
    printf("\n enter the radius of circle:");
    scanf("%d",&rad);
    ci = (2)*(pi)*(rad);
    printf("\n circumference: %f", ci );
    return 0;
}*/
/*# include<stdio.h>
# include<conio.h>
# include<stdlib.h>
int main(){
    int num1,num2,temp;
    printf("\n enter the first number: ");
    scanf("%d", &num1);
    printf("\n enter the second number :");
    scanf("%d", &num2 );
    temp = num1;
    num1 = num2;
    num2=temp;
    printf("\n the first number is %d",num1);
    printf("\n the second number is %d",num2);
    return 0;
}   
*/
/*//program to convert degree farenheight to degree celcius
# include<stdio.h>
#include<conio.h>
int main(){
    float farenheight,celsius;
    printf("\n enter the temperature in farenheight:");
    scanf("%f",&farenheight);
    celsius = (0.56)*(farenheight - 32);
    printf("\n temperature in degree celcius=%f",celsius);
    return 0;
}*/
/*
#include<stdio.h>
int main(){
    int num1,num2;
    printf("\n enter the first number:");
    scanf("%d",&num1);
    printf("\n enter the second number:");
    scanf("%d",&num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("\n the first number is:%d",num1);
    printf("\n the second number is:%d",num2);
    return 0;
}*/
/*
#include<stdio.h>
int main(){
    printf("\n the size of short integer is:%d",sizeof(short int));
    printf("\n the size of unsigned int is:%d",sizeof(unsigned int));
    printf("\n the size of signed int is:%d",sizeof(signed int)) ;
    printf("\n the size of int is:%d",sizeof(int))   ;
    printf("\n the size of long intis:%d",sizeof(long int));
    printf("\n the size of character is:%d",sizeof(char));
    printf("\n the size of unsigned character is :%d",sizeof(unsigned char));
    printf("\n the size of signed character is:%d",sizeof(signed char));
    printf("\n the size of floating point is:%d",sizeof(float));
    printf("\n the size of double number is:%d",sizeof(double))   ; 
    return 0;  

}
*/
/*
#include<stdio.h>
int main(){
    int ten,five,two,one,amt;
    printf("enter the number of rs 10 coins in the piggybank:");
    scanf("%d",&ten);
    printf("enter the number of rs 5 coins in the piggybank:");
    scanf("%d",&five);
    printf("enter the number of rs 2 coins in the piggybank:");
    scanf("%d",&two);
    printf("enter the number of rs 1 coins in the piggybank:");
    scanf("%d",&one);
    amt=10*ten+5*five+2*two+1*one;
    printf("the total amount in the piggyback is: %d",amt)
    return 0;
}
*/

