#include <stdio.h>
#include <string.h>

int main(void) {
    
    int number; 

    printf("Enter a whole number:\n");
    scanf("%d", &number);

    printf("The %d Times Table:\n", number);
    printf("------------------\n\n");

    for (int i = 0; i <= 14; i++){
        printf("%d x %d = %d\n", i, number, i * number);
    }
}
