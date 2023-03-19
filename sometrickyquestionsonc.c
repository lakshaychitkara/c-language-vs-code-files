
// this is the question having the pages number same
/*
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the number of students and the number of books : \n");
    scanf("%d",&a,&b);
    if (b<a)
    {
        printf("invalid values provided in the data \n");
    }
    else
    {
        int arr[b];
        printf(" enter the numeber of pages in the books : \n ");
    }
    return 0 ;
}
*/

// gets method gets( ) in string
/*
#include<stdio.h>
int main()
{
    char str[20];
    gets(str);
    printf("%s", str);
    return 0;
}
*/

// using the ^\n inside scanf
/*
#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^\n]s",str);
    printf("%s",str);
    return 0;
}
*/

// c program to reverse a string 

#include<stdio.h>
void reverse(char* begin, char* end)
{
    char temp;
    while ( begin < end)
    {
        temp = *begin;
        *begin++ = *end ; 
        *end-- = temp;
    }
}
int main()
{
    char str[100];
    gets(str);

    return 0;
}



