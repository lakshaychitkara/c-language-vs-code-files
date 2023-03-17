// write a function to swap two variables by using call by value and call by reference
/*#include <stdio.h>

// Swap function using call by value
void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Swap function using call by reference
void swap_by_reference(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    // Swap using call by value
    swap_by_value(x, y);
    printf("After swap by value, x = %d, y = %d\n", x, y);

    // Swap using call by reference
    swap_by_reference(&x, &y);
    printf("After swap by reference, x = %d, y = %d\n", x, y);

    return 0;
}

*/
/*
#include <stdio.h>

void calc_area_circumference(float radius, float *area, float *circumference);

int main() {
    float radius, area, circumference;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    // Call function using call by value
    calc_area_circumference(radius, &area, &circumference);
    printf("Using call by value:\n");
    printf("Area: %f\n", area);
    printf("Circumference: %f\n", circumference);
    
    // Call function using call by reference
    calc_area_circumference(radius, &area, &circumference);
    printf("Using call by reference:\n");
    printf("Area: %f\n", area);
    printf("Circumference: %f\n", circumference);
    
    return 0;
}

void calc_area_circumference(float radius, float *area, float *circumference) {
    const float pi = 3.14159265;
    *area = pi * radius * radius;
    *circumference = 2 * pi * radius;
}

*/
# include<stdio.h>
int main(){
    int a,b,c,i,j;
    printf("%d",x);
    printf("%d",&x);

    
}
