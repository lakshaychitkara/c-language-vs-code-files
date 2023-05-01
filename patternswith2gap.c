

#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int a,b,c,d,n,flag;
    printf("enter your number : \n");
    scanf("%d",&n);
    flag=0;
    for(a=2;a<=n/2;a++){
        if (n%a== 0) {
            flag = 1;
            break;
        }
    if (flag==0)
        printf("\nPRIME");
    else
        printf("NOT-PRIME");
    getch();
    return 0;}}
/*
#include<stdio.h>
int main(){
    int a,b,c,d,n;
    printf("enter the number of rows:\n");
    scanf("%d",&n);
    for(a=1;a<=n;a++){
        for(b=1;b<=a;b++){
            printf("%d",2*b-1);
        }
        printf("\n");
    }
    return 0;
}
*/
