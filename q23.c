#include <stdio.h>
#include <string.h>

int main(void) {
    
    int num; 
    int tally = 0;

    printf("Enter a number (0 to quit):\n");
    scanf("%d", &num);

    while (num != 0){
        tally += num;

        printf("Enter a number (0 to quit):\n");
        scanf("%d", &num);
    }

    printf("The tally is: %d\n", tally);



}
