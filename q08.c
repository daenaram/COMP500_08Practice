#include <stdio.h>

int main() {
    
    int height;
    
    printf("height?\n");
    scanf("%d", &height);
    
    for(int i = 0; i < height+1; i++){
        for(int w = 0; w < i; w++){
            printf("%d", height);
        }
        printf("\n");
    }

    return 0;
}
