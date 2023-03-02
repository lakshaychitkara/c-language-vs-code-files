// goto statement
/*
#include<stdio.h>
int main(){
    int a,b=0,c,i,j;
    read: //label for goto statement
    printf("enter the number:");
    scanf("%d",&a);
   
    if(a!=99){
        if(a<0){
            goto read;
        }
        b +=a;
        goto read;
    }
    printf("\n the sum of the numbers entered by the user is %d",b);

    return 0;
}
*/
//sum of numbers entered by the user by break statement
/*
#include<stdio.h>
int main(){
    int a,b=0,c,i,j;
    while(1){
    printf("enter the number or enter 999 to stop ");
    scanf("%d",&a);
    if(a==999)
    break; // quit the loop
    b +=a;

    }
    printf("\n SUM= %d",b);
    return 0;
}
*/
// same program without using the break statement
/*
#include<stdio.h>
int main(){
    int a,b=0,c,i=1,j;

    while(i==1) // loop control variable
    {
    printf("enter the number:");
    scanf("%d",&a);
    if(a != 999)
    b+=a;

    else
    i=0; //to quit the loop
    }
    printf("\n SUM = %d ",b);
    return 0;
}
*/
// sum of two numbers using int variable
/*
#include<stdio.h>
int sum(int a, int b);
int main(){
    int a,b,c=0,i,j;
    printf("enter the number: \n");
    scanf("%d",&a);
    printf("enter the number: \n");
    scanf("%d",&b);
    c=sum(a,b);
    printf("the sum of these numbers is %d \n ",c);
    return 0;
}
// function definition
int sum(int a, int b)
{
    int result;
    result= a+b;
    return result;
}
*/
// the use of more than one return statements in a function
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);
    printf("enter the number:");
    scanf("%d",&b);
    c=checkrelation(a,b);

    return o;
}
*/
// program to add 10 to the value 
/*
#include<stdio.h>

int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return o;
}
*/
// array sorting
/*
#include<stdio.h>
int main(){
    int a,c,i,j,temp;
    printf("enter the number:");
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++){
        printf("\n enter the %d element: \n",i);
        scanf("%d",&c);
    }
    for(i=0;i<(a+1)/2;i++){
        temp=arr[i];
        arr[i]=arr[a-i];
        arr[a-i]=temp;
        
    }
    for(i=0;i<a;i++){
        arr[i]=j;
        printf("%d ",j);
    }
    return 0;
}
*/
// post increment operator use in printf statement
/*
#include<stdio.h>
int main(){
    int a=5;
    int b=a++;
    printf("%d",b);
    return 0;
}
*/
// program to display fibonacci sequence
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);
    b=0;
    c=1;
    i=b+c;
    printf("%d ",0);
    for(j=1;j<a;j++){
        b=c;
        c=i;
        i=b+c;
        printf("%d ",b);
    }
    return 0;
}
*/
// you will be given n after this you will be given n elements pick up last 2 elements and bring them to front 
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j,n,arr[100],t1,t2;
    printf("enter the number:\n");
    scanf("%d",&a);
    for(i=0;i<a;i++){
        printf("enter the %d element\n",i);
        scanf("%d",&b);
        arr[i]=b;
    }
    t1=arr[a-1];
    t2=arr[a-2];
    for(i=a;i>0;i--){
        arr[i]=arr[i-2];
    }   
    arr[0]=t2;
    arr[1]=t1;
        for(i=0;i<a;i++){
            printf("%d ",arr[i]);
        } 

    return 0;
}
*/
// external storage class register 
/*
#include<stdio.h>
int exp(int a, int b);
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d %d",&a,&b);
    c=exp(a,b);
    printf("%d to the power of %d = %d",a,b,c);
    return 0;

}
int exp(int a, int b){
    register int res=1;
    int i;
    for(i=1;i<=b;i++){
        res=res*a;
    }
    return res;
}
*/
// extern storage class
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return 0;
}
*/
// program to read and display n numbers using an array
/*
#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c,i=0,arr[20],n;
    printf("\n enter the number of elements:");
    scanf("%d",&n);
    printf("\n enter the elements:");
    for(i=0;i<n;i++){
        printf("\n arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    printf("\n the array elements are \n");
    for(i=0;i<n;i++){
        printf("arr[%d] %d\t",i,arr[i]);
    }
    return 0;
}
*/
// program to find the exponent of x,y using recursive functions 
/*
#include<stdio.h>
int exp_func(int,int);
int main()
{
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);
    printf("enter the number:");
    scanf("%d",&a);

    i=exp_func(a,b);
    printf("%d",i);
    return 0;
}

int exp_func (int x,int y)
{
    if(y==0)
    return 1;
    else 
    return(x*exp_func(x,y-1));
}
*/
// name input and print
/*
#include<stdio.h>
int main(){
    char a[100];
    printf("enter the number:");
    scanf("%s",&a);
    printf("%s",a);

    return 0;
}
*/
//program to find the greatest common divisor using recursive function
/*
#include<stdio.h>
int function(int , int );
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);
    printf("enter the number:");
    scanf("%d",&b);
    c=function(a,b);
    printf("%d",c);
    return 0;
}
int function(int x, int y)
{
    int rem;
    rem=x%y;
    if(rem==0)
    return y;
    else 
    return function(x,rem);
}
*/
// fibonaci series using recursive function
/*
#include<stdio.h>
int function(int);
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        int res= function(i);
        printf("%d ",res);
    }

    return 0;
}
int function(int x)
{
    if(x==0){
        return 0;
    }
    else if (x==1){
        return 1;
    }
    else
    return (function(x-1)+function (x-2));
}
*/
//recursive function to find the factorial of a number 
/*
#include<stdio.h>
int function(int);
int main()
{
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);
    c=function(a);
    printf("%d",c);
    return 0;
}
int function(int x)
{
    if(x==1)
    {
        return 1;
    }   
    else
    return(x*function(x-1));
}
*/
// program to interchange the largest and the smallest number in the array 
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j,arr[100],small,large,temp;
    printf("enter the number:");
    scanf("%d",&a);

    for(i=0;i<a;i++)
    {
        printf(" enter the value of %d element of the array:",i);
        scanf("%d",&arr[i]);
    }
    small=arr[0];
    b=0;
    large=arr[0];
    c=0;
            printf("{");
    for(i=0;i<a;i++)
    {

        printf("%d ",arr[i]);
        if(arr[i]<small)
        {
            small=arr[i];
            b=i;
        }
        if(arr[i]>large)
        {
            large=arr[i];
            c=i;
        }

    }
    printf("}");
    temp=arr[c];
    arr[c]= arr[b];
    arr[b]=temp;
            printf("{");
    for(i=0;i<a;i++)
    {

        printf("%d ",arr[i]);
    }
    printf("}");
    return 0;
}
*/
// program to fid the second largest element of the array
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j,l,sl,arr[100];
    printf("enter the number:");
    scanf("%d",&a);
        for(i=0;i<a;i++)
    {
        printf(" enter the value of %d element of the array:",i);
        scanf("%d",&arr[i]);
    }
    l=arr[0];
    sl=arr[0];
         for(i=0;i<a;i++)
    {   if(arr[i]>l){
        sl=l;
        l=arr[i];
    }
    }
    printf("the largest and second largest of the elements are %d and %d",l,sl);
    return 0;
}
*/
// find a program to find wheather the array of integers contains a duplicate number
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j,flag=0;
    printf("enter the number:");
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if (arr[i]==arr[j])
            printf(" there is a duplicate element at %d and %d position: the element is %d \n",i,j,arr[i]);
            flag=1;
        }


    }
    if(flag==0){
        printf(" no duplicate elements in the array");
    }
    else{
        printf("duplicate elements in the array");
    }
    return 0;
}
*/
// program to display the frequency histograms of each group
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number of elements in the array \n:");
    scanf("%d",&a);
    int arr[a];
    int group[10];
    for(i=0;i<a;i++)
    {
        printf("\n marks[%d]=",i);
        scanf("%d",&arr[i]);
        ++group(int)(arr[i]/10);
    }
    printf(" \n\n  ****************************");
    i=0;
    printf("\n group \t\t frequency");
    for(i=0;i<10;i++)
    {
        printf(" \n %d \t\t %d",i,group[i]);
        getchar();
        return 0;
    }
    return 0;
}
*/
// program to display the frequency histograms of each group 
/*
#include<stdio.h>
int main()
{
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return 0;
}
*/
// program to read the sorted list of floating point values and then calculate and display the madian of the values
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        printf(" enter the %d element of the array:\n");
        scanf("%d",&arr[i]);
    }

    return 0;
}
*/
// array insert a number at a given location in the an array
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        printf(" enter the %d element of the array:\n");
        scanf("%d",&arr[i]);
    }
    return 0;}
    */
// array delete a number from the array given location
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);
    int arr[100];
    for(i=0;i<a;i++)
    {
        printf(" enter the %d element of the array:\n",i);
        scanf("%d",&arr[i]);
    }
    printf(" enter the location of the array where the element is to be deleted: \n ");
    scanf("%d",&b);
    for(i=b-1;i<a;i++)
    {
        arr[i]=arr[i+1];
    }
        for(i=0;i<a;i++)
    { printf("%d ",arr[i]);
    }
    
    return 0;
}
*/
// array program to implement binary search
/*
#include<stdio.h>
int main(){
    int a,n,b,c,i,j,num,beg,end,mid,found;
    printf("enter the number:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf(" enter the %d element of the array:\n");
        scanf("%d",&arr[i]);
    }
    printf("enter the element that has to be searched:\n");
    scanf("%d",&num);
    beg = 0, end = n-1;
    while(beg<end){
        mid=(beg+end)/2;
        if (arr[mid]==num){
            printf("\n is present in the array at position = %d", num,mid);
            found=1;
            break;
        }
        else if (arr[mid]>num)
        end = mid -1;
        else 
        beg= mid+1;
    }
    if(beg>end && found==0)
    printf("\n %d does not exist in the array",num);

    return 0;
}
*/
// array 2d
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:\n");
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(i=0;i<a;i++)
    {
        printf("\n");
        for(j=0;j<b;j++){
        printf(" enter the %d element of the array in %d row:\n",j,i);
        scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        printf("\n");
        for(j=0;j<b;j++){
            printf("%d",arr[i][j]);
        }
    }


    return 0;
}
*/
// array selection sort 
/*
#include<stdio.h>
#include<conio.h>
#include<math.h>
void selectionSort(int arr[], int n)
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        printf(" enter the %d element of the array:\n");
        scanf("%d",&arr[i]);
    }
    selectionSort(arr[],a);
        for(i=0;i<a;i++)
    { 
        printf("arr[%d]=%d",i);
    }
    
    return 0;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    int temp;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++) {
 
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx]){
                temp=j;
                j=min_idx;
                min_idx=temp;
                }

            
                
    }
}
*/
// array minimum and maximum 
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        printf(" enter the %d element of the array:\n");
        scanf("%d",&arr[i]);
    }
    int min,max;
    min=arr[0];
    max=arr[0];
    for(i=0;i<a;i++){
        if (arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("the values are %d and %d", min ,max);
    return 0;
}
*/
// array
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        printf(" enter the %d element of the array:\n");
        scanf("%d",&arr[i]);
    }
    return 0;
}
*/
// array
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return o;
}
*/
// bitwise operators
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);
    printf("enter the number:");
    scanf("%d",&b);
    printf("\n a & b =%d",a&b);
    printf("\n a|b =%d",a|b);
    printf("\n ~a=%d ",~a);
    printf("\n ~b =%d",~b);
    printf("\n a^b =%d",a^b);
    printf("\n a<<1=%d",a<<1);
    printf("\n b>>1=%d",b>>1);
    return 0;
}
*/
// a program to demonstrate the use of assignment operator
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d %d",&a,&b);
    printf("\n %d",a/b);
    return 0;
}
*/
// palindrome number 
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:\n");
    scanf("%d",&a);
    b=a;
    c=0;
    while(a>0){
        c=c*10+a%10;
        a=a/10;
    }
    
    printf("%d",c);
    
    return 0;
}
*/
// armstrong number 
/*
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,i,j,d,e,f;
    printf("enter the number:\v");
    scanf("%d",&a);
    c=0;
    b=a;
    while(a>0)
    {
        c=c+1;
        a=a/10;
    }
    f=0;
    e=0;
    for(i=0;i<c;i++)
    {
        e=b%10;
        b=b/10;
        e=pow(e,c);
        f=f+e;
    }
    printf("%d",f);
    return 0;
}
*/
// program to demonstrate the use of assignment operator
/*
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);
    printf("enter the number:");
    scanf("%d",&b);
    a += b*4-7;
    printf("\n after the evaluation of the expression a=%d and b=%d",a,b);
    return 0;
}
*/
// program to determine the character and then determine wheather it is a vowel or not
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number: \n");
    scanf("%d",&a);

    return 0;
}
*/
// program to make the 
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return 0;
}
*/
// sum of n natural numbers 
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);
    b=(a*(a-1)/2);
    if(a>0){
        printf("the sum of n natural numbers is %d",b);
    }
    else{
        printf("wrong operation");
    }
    return 0;
}
*/
// post increment (surprise in the code reads from the last)
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);
    printf("%d %d %d %d",a,a++,a++,a);
    return 0;
}
*/
// increment or decrement 
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return o;
}
*/
// pointer program to add 10 to the given numeber
/*
#include<stdio.h>
void print( int n);
void (*fp)(int);
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);
    fp = print;
    (*fp)(a);
    return 0;
}
void print(int value){
    printf("\n %d",value);
}
*/
// size of pointer is 8 for 64 bit, 4 for 32 bit and 2 for 16 bit compiler
/*
#include<stdio.h>

int main(){
    int a,b,c,i,j;
    int *pnum;
    char *pch;
    float *pfnum;
    double *pdnum;
    long *plnum;
    printf(" the size of integer variable pointer is : %d", sizeof(pnum));
    printf(" the size of character variable is %d \n", sizeof(pch));
    printf(" the size of float number is %d, \n ", sizeof(pfnum));
    printf(" the size of double poiniter is %d \n",sizeof( pdnum));
    printf(" the size of long variable is %d , \n ", sizeof( plnum));
    
    return 0;
}
*/
// pointer use shown in a program
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    int *pnum;
    pnum=&a;
    printf("enter the number:");
    scanf("%d", &              a);
    printf("%d\n",a);
    printf("%d \n",* pnum);
    printf("%d \n",& a);
    return 0;
}
*/
//  assignment of pointers conceptual clarity question
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    int *pnum,*pnum2;
    printf("enter the number:");
    scanf("%d",&a);
    pnum=&a;
    *pnum=10;
    pnum2=pnum;
    printf(" value of num using using three variables (num,*pnum,*pnum2)= %d %d %d \n", a,*pnum,*pnum2);
    printf(" the address of hte number using all three variables(&num,pnum,pnum2)=%d %d %d ",&a,pnum,pnum);
    return 0;
}
*/
// program to read and display the marks of student of a class student
/*
#include<stdio.h>
#include<conio.h>

int main()
{
    {
        struct student
    int r;
    char n[80];
    float f;
    char DOB[80];
    }


struct student stud1;
printf(" \n enter the roll number:");
scanf("%d",&stud1.r );
printf("enter name of student whose data has to be entered in the program: \n",);
scanf("%s",&stud1.n);
printf(" enter the fees :\n");
scanf("%f", &stud1.f);
printf("enter the DOB: \n");
scanf("%s", &stud1.DOB);
printf("student details\n");

printf(" \n ********student details*********\n");
printf(" \n roll no =%d", stud1.r);
printf(" NAME = %s",stud1.n);
printf(" fees =%f", stud1.f);
printf("\n DOB= %s",stud1.DOB);
return 0;
}
*/
// write a program using structures to find the biggest of the three numebers 
// /n= escape sequence
/*
#include<stdio.h>
int main(){

    struct numbers{
        int a,b,c;
        int largest;
    };
    struct numbers num;
    printf("\n enter the three numbers:");
    scanf("%d %d %d",&num.a,&num.b,&num.c);
    if(num.a>num.b && num.a>num.c)
    num.largest=num.b;
    if (num.c>num.a && num.c>num.b)
    num.largest=num.c;
    if (num.b>num.a && num.b>num.c)
    num.largest=num.c;
    printf("\n the largest number is %d",num.largest);
    return 0;

}
*/
// program to read numbers until -1 is entered also display wheather the number is prime or composite
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j,*pnum =&a,flag=0;
    printf("enter the number:");
    scanf("%d", pnum);
    while(*a != -1){
        if(*pnum==1){
            printf(" \n %d is neither prime not composite;",*pnum);
        }
        else if(*pnum == 2)
        printf("\n %d is prime");
    }
    
    return 0;
}
*/

// function some functions are predefined such as printf and scanf and others can also be defined by us in the code
// printf takes the input fram where we give the variable and gives the output in the console 
// in th eprogram w include a library in the program it is for the header files in th e program 
// math.h is a library which has a power function in it 
// in  a function we have to tell that what is the input what operation does it do and what is the output there is pre defined that what input eill go in the function 
//  in a  juicer when we put anything in it it gives back the juice of that substance
// we have to pre define the input output and the operation 
// we use int main gunciton till now in the codes that we write main is the name of the function which we are using in the code 
// jow do we write a fucntion 
// function has a name 
// the timgs that are inside the function and define the input are known as parameters 
// this is a example of add fucntion

/*
#include<stdio.h>
int add(int, int );
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);
    printf("enter the number:");
    scanf("%d",&b);
    c=add(a,b);
    printf("%d",c);
    return 0;
}
int add(int a , int b){
    
    int c;
    c=a+b;

    return c;
}
*/
// power fucntion 
/*
#include<stdio.h>
int power(int, int );
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);
    printf("enter the number:");
    scanf("%d",&b);
    c=power(a,b);
    printf("%d",c);
    return 0;
}
power(int a, int b){
    int c;
    c=a;
    for( int i=0; i<b-1 ; i++){
        c=c*a;
    }
    return c;
}
*/

/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return o;
}
*/

/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return o;
}
*/

/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return o;
}
*/
// how to find the mode of a number
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);
    if(a>0){
        printf("the mode of the number is %d",a);
    }
    else {
        b=-a;
        printf("the mode of the number is %d",b);
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return o;
}
*/

/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return o;
}
*/

/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return o;
}
*/

/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return o;
}
*/

/*
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,i,j;
    printf("enter the number:");
    scanf("%f",&a);
        printf("enter the number:");
    scanf("%f",&b);
    // here we find the magnetic flux formula =B*A where B= magnetic field A= area*
    c=b*a;
    printf("MF will be %f weber:",c);
    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return o;
}
*/

/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return o;
}
*/

/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return o;
}
*/

/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return o;
}
*/

/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("enter the number:");
    scanf("%d",&a);

    return 0;
}
// */


