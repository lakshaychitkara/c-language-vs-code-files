// addition and multiplication of two nubers
/*#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    printf("enter the values:\n");
    scanf("%d %d",&a,&b);
    printf("addition of the two numbers is %d\n",a+b);
    printf("the multiplication of the two numbers is :\n %d",a*b);
    return 0;
}*/
// given a number n print if the number value is positive negative or zero
/*
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("enter the numbers:");
    scanf("%d",&a);
    if(a>0){
        printf("\n the number is greater than zero");
    }
    else if (a<0){
        printf("\n the number is less than zero");
    }
    else{
        printf("\n the number is zero");
    }
    return 0;
}*/
//you are given two numbers x and y print the greater of the two
/*
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("enter the numbers:");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("the number %d is greater than %d",a,b);
    }
    else if (b>a){
        printf("the number %d is greater than %d",b,a);
    }
    else{
        printf("both the numbers are equal");
    }
    return 0;
}*/
// you are given three numbers a,b,c, print the smallest number 
/*
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("enter the numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c){
        printf("%d",&a);
    }
    else if(b>=a && b>=c){
        printf("%d",&b);
    }
    else{
        printf("%d",&c);
    }
    return 0;
}*/
// you are given a number n print the value of the factorial of n
/*
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
    int a,b,c,n;
    printf("enter the numbers:");
    scanf("%d",&n);
    b=1;
    for(a=1;a<=n;a++){
        b=b*a;
    }
    printf("\n %d",b);
    return 0;
}*/
// you are given an integer n print all even numbers upto n
/*
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("enter the numbers:");
    scanf("%d",&a);
    for(b=1;b<=a;b++){
        if(b%2==0){
            printf("%d",b);
        }
        else{
            continue;
        }
        printf("\n")
    }
    return 0;
}*/

/*
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
    int a,b,n;
    printf("enter the numbers:");
    scanf("%d",&n);
    for(a=1;a<=n;a++){
        
        for(b=1;b<a;b++){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    return 0;
}*/
// nobita scored good marks in his previous test. he was given a bunch of toffies to distribute among his friends and himself
/*#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,e,n,i;
    printf("enter the number of test cases \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    printf("enter the space separated integers \n");
    scanf("%d %d",&a,&b);
    c=a%b;
    printf("the number of candies returned is : %d \n",c);
    }
    printf("thanks of testing the code");
    return 0;

}*/
// program to make a pattern of characters n c 1
/*
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,n,i,j;
    char c;
    printf("enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c", 'A'-1 +i);
        }
        printf("\n");

    }
    return 0;
}
*/
// program to make a pattern of characters in c 2
/*# include<stdio.h>
# include<math.h>
int main(){
    int a,b,c,n,i,j;
    printf("enter the number of rows in the program: \n");
    scanf("%d",&a);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf()
        }
    }
    return 0;
}
*/
/*
#include<stdio.h>
int swap(int a,int b ){
    int temp=a;
    a=b;
    b=temp;
    printf("%d %d \n",a,b);

}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    swap(a,b);
    printf("%d %d",a,b);
    return 0;
}
*/
// use of pointers in the program
/*int swap(int, int );
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d %d",*a,*b);
    swap(a,b);
    printf("%d %d",*a,*b);
}
int swap(int a, int b){
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("%d %d ",*a,*b);
}*/
// what is the minimum number of notes of a currency if you have got the notes of 100,50,10 and 5,2,1 with you 
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j,k,l,m,n,o;
    printf("enter the number:\n");
    scanf("%d",&a);
    b=a;
    c=0; // no of 100 rupee notes
    k=0; // no of 50 rupee notes
    l=0;   // no of 10 rupee notes
    m=0;    // no of 5 rupee notes
    n=0;     // no of 2 rupee notes
    o=a%2;    // no of 1 rupee notes
    
    for(i=0;i<3;i++){
    c=b/100;
    k=(b%100)/50;
    l=(b%50)/10;
    m=(b%10)/5;
    n=(b%5)/2;
    }
}
*/
// a tricky code of c in the class

#include<stdio.h>
int main(){
    int a,b,c,i,j,k,l,m,n,o,p,q,r,sum=0;
    printf("enter the number of elements in the array:\n");
    scanf("%d",&q);
    int arr[q];
    for(j=0;j<q;j++){
        scanf("%d",&arr[j]);
    }
    printf("enter the number of times that you want to do this program:\n");
    scanf("%d",&r);
    for(i=0;i<r;i++){
    printf("enter the number:\n");
    scanf("%d %d",&a,&b);
    for(i=a;i<b;i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);}
    return 0;

}


