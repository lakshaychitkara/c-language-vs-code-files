// this program helps to make the implications of a conditional operator clear 
/*
# include<stdio.h>
# include<math.h>
int main(){
    int a,b,c,i,j;
    printf("enter the age : ");
    scanf("%d",a);
    (a>18)?printf("you are eligible for voting"):printf("you are not eleigible for voting");
    return 0;
}
*/
// this program is anoth er program to make the use of ternary operator which is also called conditional operator 
/*
# include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the numbers : ");
    scanf("%d %d %c",&a,&b,&c);
    (a>=b && a>=c)?printf("a is the greatest number in the three numbers"):(b>=a & b>=c)?printf("the number b is the greatest number among the three numbers"):printf("the number c is the greatest among the three numbers");
    return 0;
}
*/
// program to find the greates and the second gretest number in three numbers by using if else
/*
#include<stdio.h>
#include<stdio.h>
int main(){
    int a,b,c,n,i,j;
    printf("enter the numbers : \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b){
        if(a>=c){
            printf("%d",a);
        }
        else {
            printf("%d is the greatest number \n",c);
            printf(" %d is the second greatest number \n ",a);
        }
    }
    else if ( b>=a){
                if(b>=c){
            printf("%d",b);
        }
        else {
            printf("%d is the greatest number \n",c);
            printf(" %d is the second greatest number \n ",b);
        }

    }

    return 0;
}
*/
// switch case solve the quadratic equation
/*
# include<stdio.h>
int main(){
    int a,b,i,j,n;
    char c;
    printf("enter the values of character : \n");
    
    scanf("%c",&c);
    switch (c) {
        case 'a':{
            printf("\n the entered value is a vowel ");
            break;
        }
        case 'e':{
            printf("\n the entered value is a vowel ");
            break;
        }
        case 'i':{
            printf("\n the entered value is a vowel ");
            break;
        }
        case 'o':{
            printf("\n the entered value is a vowel ");
            break;
        }
        case 'u':{
            printf("\n the entered value is a vowel ");
            break;
        }
        default:{
            printf("\n the entered valu is not a vowel");
        }
    }
    return 0;
}
*/
// questions on arrays 1
/*
# include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    printf("%d",arr[0]);
}
*/
// conditional statements
/*
# include<stdio.h>
int main(){
    int a=1,b,c,i,j;
    printf("enter the value: \n");
    scanf("%d",&i);
    for(j=1;j<=i;j++){
        a=a*j;
    }
    printf("%d",a);
    return 0;
}
*/
// question on arrays 2
/*# include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    arr[0]=0;
    printf("%d",)
}
*/
// class question 9+99+999+.....
/*
# include<stdio.h>
int main(){
    int a,b,c,i,j ;
    printf("enter the values:\n");
    scanf("%d",&a);
    j=9;
    b=0;
    for(i=1;i<=a;i++){
        b=b+j;
        j=j*10 + 9;
    }
    printf("%d",b);
    return 0;
} */
// another answer to this question
/*
# include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the values");
    scanf("%d",&a);
    b=1;
    c=0;
    for(i=1;i<=a;i++){
        b=b*10;
        c=c+b;
    }
    c=c-a;
    printf("%d",c);
    return 0;
}
*/
// class question strings
/*
# include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("\n %c",greetings[0]);
    greetings[0]='j';
    printf("\n %s", greetings);
    char carname[] = "volvo";
    for(i=0; i<5 ; ++i){
        printf("%c \n", carname[i]);
    }
    printf("\n");
    char greetings[]= {'h','e','l','l','o',' ','w','o','r','l','d','!','\0'};
        printf("\n %s",greetings);
    printf("%s", greetings);
    return 0;
}
*/
// write a function to swap the value of two variable
/*
#include<stdio.h>
void swap_call_by_val(int,int);
void swap_call_by_ref(int*,int*);
int main(){
    int a=1,b=2,c=3,d=2;
    printf("\n in main(), a=%d and b=%d",a,b);
    swap_call_by_val(a,b);
    printf("\n in main(), a=%d and d=%d");
    
    
}
*/
//write a program to add two integers using 
/*
# include<stdio.h>
int sum(int a, int b);
int main(){
    int num1, num2,total = 0;
    printf("\n enter the first number:");
    scanf("%d", &num1);
    printf("enter the second number: ");
    scanf("%d",&num2);
    total = sum(num1,num2);
    printf("\n total= %d", total);
    return 0;
    
    }
    // FUNCTION CALL
    int sum(int a, int b) // FUNCTION HEADER
    {                 // FUNCTION BODY
        int result;
        result= a+b;
        return result;
    }
*/
// program to find that the 
/*
# include<stdio.h>
# include<conio.h>
int check_relation(int a, int b);
int main(){
    int a=3,b=5,res;
    res = check_relation(a,b);
    if(res==0) // test that returned value
    {
        printf("\n EQUAL");
    }
    if(res==1)
    {
        printf("\n is greater than b");
    }
    if(res==-1)
    {
        printf("\n is less than b");
    }
    getch();
    return 0;
}
int check_relation(int a, int b)
{
    if(a==b){
        return 0;
    }
    else if(a>b){
        return 1;
    }
    else{
        return -1;
    }
}
*/
// call by value
/*
# include<stdio.h>
void add(int n);
int main()
{
    int num = 2 ;
    printf("\n the value of num before calling the function = %d",num);
    add(num);
    printf("\n the value of num after calling the function= %d",num);
    return 0;
} 

void add(int n)
{
    n=n+10;
    printf("\n the value of num in the called function = %d", n);
}
*/
// nested loops conditions 
/* 
# include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the value:\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
*/
//find the number of positive and negative and zeroes in the input
/*
# include<stdio.h>
int main(){
    int a,b,positive,negative,zero,i,j;
    printf("enter the value:\n");
    scanf("%d",&a);
    positive=0;negative=0;zero=0;
    for(i=1; i<=a; i++){
        printf("enter the number:\n");
        scanf("%d",&b);
        if( b>0){
            positive=positive+1;
        }
        if(b<0){
            negative=negative+1;
        }
        if(b==0){
            zero=zero+1;
        }
    }
    printf( "%d %d %d",positive,negative,zero);
}
*/
// program to find the sum of digits 
/*

# include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the value:\n");
    scanf("%d",&a);
    b=0;
    while(a>0){
        b=b + a%10;
        a=(int) a/10;
    } 
    printf("%d",b);   
    return 0;
    }
    */
// program on functions
/*
# include<stdio.h>
void myfunction(){
    printf("i just got executed");
}
int main(){
    myfunction();
    myfunction();
    myfunction();
    return 0;
}
*/
/*
# include<stdio.h>
void myfunction( char name[]){
    printf(" Hello %s \n", name);
}
int main(){
    myfunction("liam");
    myfunction("jenny");
    myfunction("Anja");
    return 0;
    
}
*/
/*
# include<stdio.h>
void myfunction(char name[], int age){
    printf("Hello %s you are %d years old. \n", name, age);
}
int main(){
    myfunction("liam",3);
    myfunction("jenny",14);
    myfunction("anja",30);
}
*/
/*
# include<stdio.h>
void myfunction( int mynumbers[5]){
    for(int i = 0 ; i<5 ;i++){
        printf("%d \n ", mynumbers[i]);

    }
}
int main(){
    int mynumbers[5]={10,20,30,40,50};
    myfunction(mynumbers);
    return 0;
}
*/
 
# include<stdio.h>
void myfunction(int nynumbers[5]){
    printf("%d \n", mynum)
}
int main(){
    
}

/* 
# include<stdio.h>
int main(){
    printf("enter the value: ");
    scanf("%d",&a);
    
}
*/
/* 
# include<stdio.h>
int main(){
    printf("enter the value: ");
    scanf("%d",&a);
    
}
*/
/* 
# include<stdio.h>
int main(){
    printf("enter the value: ");
    scanf("%d",&a);
    
}
*/






