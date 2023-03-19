// infinite error 
/*
#include<stdio.h>
int main(){
    int a,b,c;
    char ch;
    for(3;4;2){
        printf("hello");
    }
    return 0;
}
*/


// question 2 HCF
// euclid algorithm is used 
/*
#include<stdio.h>
int hcf(int n1, int n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}

int main(){
    int a,b,c;
    char ch;
    scanf("%d %d",&a,&b);
    c=hcf(a,b);
    printf("%d",c);
    return 0;
}
*/

// not using recursion in this question 
/*
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,hcf;
    char ch;
    for(int i=1 ; i<=min(a,b) ; i++){
        if(a%i ==0 && b%i==0 )
        hcf=i;
    }
    return 0;
}
*/
// find the lcm with 2 menthods 
/*
#include<stdio.h>
int main(){
    int a,b,c;
    char ch;
    return 0;
}
*/
// book allocation problem  we are given the books and their pages are in the form of an array and we have to distribute it such that the student have the minimum number of pages
// for instance there are random array numbers a1,a2,a3,a4,------an arnge the pages 
// we have to distribute such that every student can minimise the number of pages that he is given
// the concept of binary search is applied in here
// in monotonous distribution we can use binary search
// suppose i have an array like this TTTTTTFFFFFF and we have to fing the number between true and false
// we can figure it out using the concept that the number would be one less than the lower bound of the array of f
// reange would be the max and min of the array 
// max=sum of entire elements
// smallest is the minimum number a1
// i can allocate every student x pages then i can also allocate x+1
// we have to find the mid of this search space and then find that weather it is overflowing or not 
// if overflow then we make the mid to be the max and then find 
// 1,2,2,5,7,5 and the no of students is 4
// max is 22 and min is 1
// mid is 11
// (1,2,2,5),7,5
// 7 is the right answer 

#include<stdio.h>
int main(){
    int a,b,c;
    char ch;
    
    return 0;
}

/*
#include<stdio.h>
int main(){
    int a,b,c;
    char ch;
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int a,b,c;
    char ch;
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int a,b,c;
    char ch;
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int a,b,c;
    char ch;
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int a,b,c;
    char ch;
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int a,b,c;
    char ch;
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int a,b,c;
    char ch;
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int a,b,c;
    char ch;
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int a,b,c;
    char ch;
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int a,b,c;
    char ch;
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int a,b,c;
    char ch;
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int a,b,c;
    char ch;
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int a,b,c;
    char ch;
    return 0;
}
*/
