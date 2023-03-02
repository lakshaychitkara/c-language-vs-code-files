/*#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int a,b,c,d;
    a=10;
    b=20;
    switch(a){
        a=10: 
        printf("the value of a is 10");
        break;
        b!=20: 
        printf("the value of b is 20");
        break;
        default: printf(" the values of a and b are integers") if a!=10;
    } 
    return 0;
}*/
/*
#include<stdio.h>  
int main(){    
int number=0;     
printf("enter a number:");    
scanf("%d",&number);    
switch(number){    
case 10:    
printf("number is equals to 10");    
break;    
case 50:    
printf("number is equal to 50");    
break;    
case 100:    
printf("number is equal to 100");    
break;    
default:    
printf("number is not equal to 10, 50 or 100");    
}    
return 0;  
}    */
// turing block 410 room before 4 o clock
// making a calculator in c

/*#include<stdio.h>
int main(){
    int a=10,b=20;
    char character='+';
    printf("enter the character \n");
    scanf("%c", &character );
    printf("\n enter the values of a and b:\n");
    scanf("%d %d",&a,&b);
    switch(character){
        case '+' :
        printf("%d \n",(a+b) );
        break;
        case '-' :
        printf("%d \n",(a-b));
        break;
        case '*':
        printf("%d \n",(a*b));
        break;
        case '/':
        printf("%d \n",(a/b));
        break;
        default:
        printf("please enter a valid character\n  ");
    }
    return 0;
}
*/
/*
# include<stdio.h>
int main(){
    int n,a,b,k;
    printf("enter n \n");
    scanf("%d",&n);
    for(a=1;a<=n;a++){
        for(b=1;b<=a;b++){
            printf("%d",(n-a-b)+2);
        
        }
        printf("\n");
    }
    return 0;
} 
// find prime

#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
    int a,b,c,d,n,flag;
    printf("enter your number : \n");
    scanf("%d",&n);
    flag=1;
    for(a=2;a<=n/2;a++){
        if (n%a== 0) {
            flag = 1;
            break;
        }
    if (flag==0)
        printf("\nPRIME");
    else
        printf("NOT-PRIME");
    return 0;
}*/
// check if the number is a palindrome number
 
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,e,n;
    printf("enter the number you want to check for palindrome number:\n");
    scanf("%d",&n);
    c=0;
    b=n;
    while(b>0)
    {
        c=c*10 +(b%10);
        b=(int)b/10;
    }
    if(c==n)
    {
        printf("\n palindrome");
    }
    else
    {
        printf("\n not palindrome");
    }
    return 0;
}*/

#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter the number of rows:\n");
    scanf("%d",c);
    for(a=1;a<=n;a++){
        for(b=1;b<=a;b++){
            printf("%d",b);
            b++;
        }

    }
    return 0;
}

