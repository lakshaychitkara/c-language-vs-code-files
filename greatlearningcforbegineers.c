//integer varient of a floating point number
/*#include<stdio.h>
#include<conio.h>
int main(){
    float f_num;
    int i_num;
    printf("\n enter any floating point number:");
    scanf("%f", &f_num);
    i_num=(int)f_num;
    printf("\n the integer varient of %f is = %d", f_num, i_num);
    return 0;
}
*/
//float point varient of a integer
/*#include<stdio.h>
#include<conio.h>
int main()
{
    float b;
    int a;
    printf("\n print the integer:") ;
    scanf("%d", &a );
    b = (float)a ;
    printf("\n the floating integer number is:%f", b);
    return 0 ;
}*/
//pg 52 programming exercises
/*#include<stdio.h>
int main()
{
    int x=3,y=5,z=7;
    int a,b;
    a=(x*2) + (y/5) -(z*y); 
    b=++x*(y-3)/2 - (z++*y);
    printf("\n a=%d",a);
    printf("\n b=%d",b);
    return 0;
}*/
//program to print the number of vowels in a text
/*#include<stdio.h>
int main()
{
    int a=4,b=5,c=6;
    a=b==c;
    printf("\n a=%d" ,a);
    return 0;
}*/
/*#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    float fnum;
    char ch;
    char str[10];
    scanf("%d %f %c %s", &num, &fnum,&ch,str);
    printf("this is the value of the float number: %f", fnum);
    return 0;
}*/
//program to find out the distance between the two points
/*# include <stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int x1,y1,x2,y2,dis;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    dis=sqrt((pow((x2-x1),2)+pow((y2-y1),2)));
    printf("\n the distance between the two points is: %d",dis);
    return 0;

}*/
//program to find out the greater of the two numbers
/*#include<stdio.h>
int main(){
    int x,y;
    printf("\n enter two numbers:");
    scanf("%d %d", &x,&y);
    if(x==y)
        printf("\n two numbers are equal");
    else if(x>y)
        printf("\n %d is greater than %d",x,y);
    else
        printf("\n %d is smaller than %d",x,y);
    return 0;
}*/
//program to find out that the given year is leap year or not 
/*#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int a,b;
    printf("\n the given year is leap year if the year is divisible 4 and is not divisible by 100 but it can be divisible by 400");
    printf("\n enter the year to find out that it is leap year or not:");
    scanf("%d",&a);
    if (a%4 == 0)
    if (a%100==0 && a%400!=0)
    printf("\n the year is not a leap year");
    else
    printf("\n the year is a leap year");
    else
    printf("\n the year is not a leap year");
    return 0;
}*/
//prigram to enter any character if the entered character is lowercase then cahange the it to uppercase 
/*#include<stdio.h>
#include<conio.h>
int main(){
    char ch;
    printf("\n enter the character:");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z')
    printf("\n the entered character was in the upper case. in lowercase it is:%c",(ch+32));
    else
    printf("/n the entered character was in lowercase the uppercase character will be: %c",(ch-32));
    return 0;
}*/
//enter a character and then then determine wheather it is a vowel or not 
/*#include<stdio.h>
#include<conio.h>
int main(){
    char ch;
    printf("\n enter any character:");
    scanf("%c", &ch);
    if (ch='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    printf("\n the character %c is a vowel ",ch);
    else 
    printf("\n the character %c is not a vowel",ch);
    return 0;
}*/
//program to find wheatkher a given number is even or odd 
/*#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int a,b;
    printf("\n enter a number:");
    scanf("%d", &a);
    if (a%2==0)
    printf("\n the number %d is a even number ", a);
    else
    printf("\n the given number %d is not a even number",a);
    return 0;
}*/
// program to find the greatest of three numbers 
/*#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf(" \n enter the three numbers:");
    scanf("%d %d %d", &a, &b, &c);
    if(a>=b)
    {
    if(a>=c)
    printf("the number %d is the greatest of the three numbers",a);
    else
    printf("the number %d is the greatest number of the three numbers",c);
    }
    elif (b>=c)
    {  
        printf("the number %d is the greatest number of the three number",b);
    }
    else 
    printf(" the number %d is the greatest number of the three",b);
    return 0;

}*/
//example 14 write the program to enter the marks of a student in four subjects then calculate the total aggregate and display the grades obtained by the student
/*#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int a,b,c,d,total,aggregate;
    float average=0.0;
    printf("\n print the marks of the four subjects:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    total=a + b + c + d ;
    printf("\n the total of these numbers is: %d",total);
    aggregate=total/4;
    printf("\n the aggregate of the data given is : %d",total);
    if (aggregate>75)
    printf("\n distinction");
    else if (aggregate>=60 && aggregate<=75)
    printf("\n first division");
    else if (aggregate>=50 && aggregate<=60)    
    printf("\n second division");
    else if ( aggregate>=40 && aggregate<=50)
    printf("\n third division");
    else
    printf("\n Fail");
    return 0;
}*/
//example 5 write a program to convert time and minutes
/*#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int a,b,c,d;
    
}*/
//program to determine if the entered value is a character or a integer 
/*#include<stdio.h>
int main(){
   char ch;
   printf("enter a character:");
   scanf("%c",&ch);
   if(ch >= 65 && ch <= 90)
      printf("Upper Case Letter");
   else if(ch >= 97 && ch <= 122)
      printf("Lower Case letter");
   else if(ch >= 48 && ch <= 57)
      printf("Number");
   else
      printf("Symbol");
   return 0;
}*/
//program to read the characters till *
/*#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    char ch;
    int lowers=0,uppers=0,numbers=0;
    printf("\n enter any character:");
    scanf("%c",&ch);
    do{
        if (ch>='A'&& ch<='A')
        uppers++;
        if(ch>='a'&& ch<='z')
        lowers++;
        if(ch>='0'&& ch<='9')
        numbers++;
        fflush(stdin);
        //the function is used to clear the standard input file
        printf("\n enter the valueof another character. enter *to exit.");
        scanf("%c",&ch);

    }while(ch!='*');
    printf("\n the total count of numbers entered =%d",numbers);
    return 0;
}*/
// program to read the numbers till -1 is encountered also calculate the sum and mean of the positive numbers entered and the sum of the mean of all negative numbers entered separately
/*#include<stdio.h>
#include<conio.h>
int main(){
    int num=0;
    int sumn=0,sump=0;
    int p=0,n=0;
    float meanp=0.0,meann=0.0;
    printf("\n enter -1 to exit. enter any number");
    scanf("%d",&num);
    do{
        if num>0
        {
            sump+=num;

        }
        else if(num<0)
        {
            sumn+=num;

        }
    }while(num!=-1);
    meanp=(float)sump;
    meann=(float)sumn;
    printf("\n total number of numbers entered=%d",num)
}*/
// program to use the for loop to find the average of first n natural numbers 
/*#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,sum=0;
    float avg=0.0;
    printf("\n enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    avg=sum/n;
    printf("%f",avg);
    return 0;    
}*/
// program to find the factorial of a number
/*#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int a,b=1,factorial=1;
    printf("\n enter the number whose facrtorial you want to find :");
    scanf("%d",&a);
    for(i=1;i<a;i++){
            factorial=factorial*i;
    }
    printf("the factorial of the number %d is %d",a,factorial);
    return 0; 
}*/
// program to find the multiplication table of n
/*#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    
}*/
// program to interchange the largest and smallest number in the array
// it has a mistake of displaying the small numbers in an array
/*#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int i,n,arr[20],temp;
    int small,small_pos;
    int large,large_pos;
    printf("\n enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n enter %d element:",i);
        scanf("%d",&arr[i]);

    }
    small=arr[0];
    small_pos=0;
    large=arr[0];
    large_pos=0;
    for(i=0;i<n;i++);
    {
        if(arr[i]<small){
        small=arr[i];
        small_pos=i;}
        if(arr[i]>large)
        {
            large=arr[i];
            large_pos=i;

        }
    }
    printf("\n the smallest of these numbers is : %d",small);
    printf("\n the position of the smallest number in the array is : %d",small_pos);
    printf("\n the largest of these numbers is :%d",large);
    printf("\n the position of the largest of these numbers is : %d",large_pos);
    
    temp =arr[large_pos];
    arr[large_pos]=arr[small_pos];
    arr[small_pos]=temp;
    printf("\n the new array is:");
    for(i=0;i<n;i++){
        printf("\n %d",arr[i]);
    }
    return 0;
}*/
// program to find the second largest number using an array of n numbers
//not completed till now
/*#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float i,n,arr[20],pos,large,second_large;
    printf("\n enter the number of elements:");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        printf("enter the value of the integer you want to add in the array")
        scanf("%d",&arr[i]);
        printf("\n now the next value in the array:");

    }
    large=0;
    for(i=1;i<n;i++){

    }

}*/
//program to find the roots of the equation 
/*#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d,r1,r2;
    printf("enter the values off the numbers a b c of the program in which you have to find the roots:");
    scanf("%f %f %f",&a,&b,&c);
    r1= (-b + sqrt((pow(b,2))-4*a*c))/(2*a);
    r2=(-b - sqrt(pow(b,2) - 4*a*c))/(2*a);
    printf("the two numbers are %f %f",r1,r2);
    return 0;
}*/
//program to find the read and display n random numbers using an array
// it has a mistake
/*#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 10 
int main(){
    int arr[MAX],i,RandNo;
    for(i=0;i<MAX;i++){
        //scale the random number in the range 0 to MAX-1
        RandNo = rand()%MAX;
        arr[i]=RandNo;
    }
    printf("\n The contents of the array are: \n");
    for(i=0;i<MAX;i++){
        printf("\t %d",arr[i]);
        getch();
        return 0;
    }
}*/
//  program to find the the position of the smallest of the n numbers in the array 
/*#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int i,n,arr[20],small,pos;
    printf("\n enter the number of elements in the array:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&n);
        arr[i]=n;
        }
    return 0;
}*/
// program to find the find the the wheather the arr of integers contains a duplicate number 
/*#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
    int a,b,arr[20],n,flag=0,j,i;
    printf("\n enter the size of the array:");
    scanf("%d",&n);
    printf("\n enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }
    
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j] && i != j){
                flag=1;
                printf("\n duplicate numbers found at location %d and %d",i,j);

            }
        }
        
        }
    if(flag==0){
            printf("there are no duplicate elements in the array");
    }
    return 0;
    
    }
*/
// program to read the two dimensional array marks which stores the marks of 5 students in 3 subjects. write a program to display the highest marks in each subject
/*#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int marks[5][3],i,j,max_marks;
    for(i=0;i<5;i++){
        printf("\n enter the marks obtained by the student %d",i);
        scanf("%d",&marks[5][i]);
    }
    
}
*/
//
/*#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int i,j,n,d;
    printf("enter the rows that the array contains:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(j=1;j<n-i +1;j++)
        {
            printf("*");
        }
        printf("\n");
    
    }


}*/










