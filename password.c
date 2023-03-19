// when we apply a form then we make a account then we have to make a password and then print that wheather the string password is valid or invalid
/*
like we have to make sure that it has a special character and number and a capital letter and small case letter 
*/
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    char ch[1000];
    printf("enter the password: \n");
    scanf("%s",ch);
    

    return 0;
}
*/
 // * C Program to Count Number of Words in a Sentence
/*
#include <stdio.h>
#include <string.h>
 
void main()
{
    char s[200];
    int count = 0, i;
 
    printf("Enter the string:\n");
    gets(s);
    puts(s);
    // scanf("%[^\n]s", s);

    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;    
    }

    printf("Number of words in given string are: %d\n", count + 1);
}

#include<string.h>
int main() {
        char s[100];   
        scanf("%s", s);
        int n=strlen(s);
        int  b1=0,b2=0,b3=0,b4=0,b5=0;
        if(n>=10)
         b1=1;
        for(int i=0;i<n;i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            { b2=1;break;}
        }
        for(int i=0;i<n;i++)
        {
            char ch=s[i];
            if(ch>='A'&&ch<='Z')
             b3=1;

            if(ch>='0'&&ch<='9')
             b4=1;

            if(ch=='@'||ch=='#'||ch=='&'||ch=='?'||ch=='%')
             b5=1; 
        }

        if((b1==1)&&(b2==1)&&(b3==1)&&(b4==1)&&(b5==1))
        printf("valid password");
        else
        printf("Invalid password");
    }
// int main()
// {
//     auto int a=3;
//     {
//         auto int a=5;
//         printf("%d",a);
//     }
//     printf("%d",a);
// }

#include<stdio.h>
int main()
{
     register int a=3;
    {
         register int a=5;
        printf("%d\n",a);
    }
    printf("%d",a);
}
int fun(int x){
static  int y=0;
y=y+1;
return x+y;
}
int main()
{
    int n=3,s1,s2;
    s1=fun(n);
    s2=fun(n);
    printf("%d  %d",s1,s2);
}
void func(void);
 
 int count = 5; /* global variable */
/*
int main() {
   while(count--) {
      func();
   }
	
   return 0;
}
void func( void ) {

static int i = 5; /* local static variable */
 /*  i++;

   printf("i is %d and count is %d\n", i, count);
}*/


// string questions 
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,i,j;
    char str[50];
    printf("\n \n accept a string from keyboard: \n");
    printf("------------------------------ \n");
    printf("input the string : \n");
    fgets(str, sizeof str , stdin);
    printf(" the string you entered is : %s \n", str);

}
*/

// question 2 ( watch that what is the difference in the output between it and question 1)
/*
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,i,j;
    char str[50];
    printf("enter the string : \n");
    scanf("%s",&str);
    printf("the string that you entered is %s ", str);
    return 0;
}
*/

// question 3
/*
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,c,i,j;
    char ch[50];
    printf("enter the value of the string: \n");
    fgets (ch, sizeof ch , stdin);
    printf(" the string that you entered is %s \n", ch);
    return 0;
}
*/

// question 3
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,i,j;
    char ch[50];
    printf("enter the value of the string : \n");
    fgets(ch, sizeof ch , stdin);
    printf(" the string that you entered is %s ",ch);
    return 0;
}
*/

// question 4
/*
#include<stdio.h>
# include<stdlib.h>
int main()
{
    int a,b,c;
    char ch[50];
    printf("enter the value of the string: \a\n");
    fgets(ch, sizeof ch, stdin);
    int l=0;
    while(ch[l] !="\0"){
        l++;
    }
    printf("length of the string is : %d\n \n ",l-1);

    return 0;
}
*/


// question 5
/*
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,c;
    char ch[50];
    printf("enter the string: \n");
    fgets(ch, sizeof ch, stdin);
    return 0;
}
*/

// question 6 

#include<stdio.h>
int main(){
    int a,b,c,i,j;
    char ch;
    printf("enter the string : \n");
    scanf("%s",ch);
    return 0;
}

// question 7
#include<stdio.h>
int main(){
    in
}