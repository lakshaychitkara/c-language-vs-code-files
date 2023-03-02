// without using temporary variable
/*
#include <stdio.h>
int main(){
    int a,b;
    printf("hello lakshay, enter the two numbers that you want to swap in the program /n");
    printf("enter the first number a: \n");
    scanf("%d",&a);
    printf("enter the second number b: \n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the number a is : %d \n",a);
    printf("the number b is: %d \n ",b);
    return 0;
} 
*/
// with using temporary variable 
/*
#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c,n,i,j;
    printf("enter the numbers which you want to swap: \n");
    printf("enter the first number a :");
    scanf("%d",&a);
    printf("\n enter the second number b:");
    scanf("%d",&b);
    c=b;
    b=a;
    a=c;
    printf(" \n the number a is %d",a);
    printf(" \n the number b is %d",b);
    return 0;
}

