#include <stdio.h>
#include <string.h>

int main(void) {
    
    int start, end, size;

    printf("Count down start?\n");
    scanf("%d", &start);

    printf("Count down end?\n");
    scanf("%d", &end);

    printf("Step size?\n");
    scanf("%d", &size);

    for (int i = start; i >= end; i--){
        printf("%d, ", i);
    }

}
