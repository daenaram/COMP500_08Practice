#include <stdio.h>

int main(){
    
    int num1, num2, num3;
    
    printf("Enter the first side length:\n");
    printf("Enter the second side length:\n");
    printf("Enter the third side length:\n\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if ((num1 == num2) && (num2 == num3)){
        printf("This is an equilateral triangle.");
    }
    
    else if ((num1 != num2) && (num1 != num3))
    {
        if ((num2 != num3)){
            printf("This is a scalene triangle.");
        }
    }
    
    else if ((num1 == num2) || (num1 == num3)){
        if ((num2 != num3)){
            printf("This is an isosceles triangle.");
        }
    }
}
