/*
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,i,j,arr[100];
    printf("enter the number of elements that the array contains: \n");
    scanf("%d",&a);
    
    for(i=1;i<=a;i++){
        scanf("%d",&b);
        arr[i]=b;
    }
    printf(" the array is : {");
        for(i=1;i<=a;i++){
          
            printf("%d",arr[i]);
        }
        printf("} \n");
    printf(" enter the number to insert and its position: \n");
    scanf("%d %d",&c,&b);
    arr[b]=c;
    printf(" the inserted array is : {");
        for(i=1;i<=a+1;i++){
          
            printf("%d ",arr[i]);
        }
        printf("} \n");

    return 0;
}
*/

// search the element in the array 
/*
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,i,j,arr[100];
    printf("enter the number of elements that the array contains: \n");
    scanf("%d",&a);
    
    for(i=1;i<=a;i++){
        scanf("%d, ",&b);
        arr[i]=b;
    }
    printf(" the array is : {");
        for(i=1;i<=a;i++){
          
            printf("%d",arr[i]);
        }
        printf("} \n");
    printf(" enter the number that you want to search : \n");
    scanf("%d",&c);
    for(i=1;i<=a;i++){
        if (arr[i]==c)
        printf(" the element is at %d position \n",i-1);
    }
    return 0;

}
*/

