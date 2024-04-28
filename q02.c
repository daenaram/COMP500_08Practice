#include <stdio.h>

int main(void){
    
    int num1, num2, num3;
    
    printf("Please enter a number:\n");
    printf("Please enter another number:\n");
    printf("Please enter a third number:\n\n");
    
    scanf("%d %d %d", &num1, &num2, &num3);
    
    int big = num1;
    int smol = num1;
    
    if (big > num2){
        big = num2;
    }
    
    if (big > num3){
        big = num3;
    }
    
    if (smol < num2){
        smol = num2;
    }
    
    if (smol < num3){
        smol = num3;
    }
    
    printf("Biggest number was: %d\n", smol);
    printf("Smallest number was: %d", big);
}
