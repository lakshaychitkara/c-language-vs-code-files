/*#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,n;
    printf("enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)7
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }   
        printf("\n"); 
    }
    return 0;
}*/
/*
#include<stdio.h>
int main(){
    int i,j,k;
    printf("enter the number of rows:");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=k-i+1;j++)
        {
            printf("*");
        } 

        printf("\n");
    }

    return 0;
}*/

/*#include<stdio.h>

#include<conio.h>
int main(){
    int i,j,k;
    printf("enter the number of rows");
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        for(j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        for(j=1;j<=k-i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }

}*/

//program to convert celcius to faenfarenheit
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int c;
    printf("enter: \n");
    scanf("%d",&c);
    
    printf("the farenheit value after the conversion is:%d",c);
    getch();
    return 0;
}








