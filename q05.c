#include <stdio.h>

int main(){
    
    int base, power;
    int result = 1;
    
    printf("Enter the base:\n");
    scanf("%d", &base);
    
    printf("Enter the power:\n");
    scanf("%d", &power);
    
    if (power == 0){
        printf("2 ^ 0 which is 1");
    }
    
    else if (power >= 0) {
        for (int i = 0; i < power; i++) {
        result *= base;
        }
        
        printf("%d ^ %d is the same as...\n\n", base, power);
        printf("%d", base);
        for (int i = 1; i < power; i++) {
            printf(" * %d", base);
        }
    
        printf(" which is %d", result);
    }
    
    
}
