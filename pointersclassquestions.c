#include<stdio.h>
#include<math.h>
int main(){
    int a=3,b,c,i,j;
    int *p=&a;
    printf("%d\n",*p);
    printf("%d\n",a);
    *p=*p+1;
    printf("%d\n",a);
    printf("%d\n",*p);
    p=p+1;
    printf("%d \n",*p);
    printf("%d \n",a);
    printf(" enter the number of elements of the array: \n");
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
        
    }
    int *pointer=arr;
    for(i=0;i<a;i++){
        printf("%d  ",*(pointer+i));
    }
    return 0;
}