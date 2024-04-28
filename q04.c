#include <stdio.h> 

int main(){
    
    int start, end, step;
    int loop;
    
    printf("Starting number:\nStopping number:\nStep size:\n");
    scanf("%d %d %d", &start, &end, &step);
    
    printf("Using a for loop:\n\n");
    
    printf("Starting at %d...\n\n", start);
    
    for (int i = start; i <= end; i += step){
        printf("In loop: %d...\n", i);
        loop++;
    }
    
    printf("\nStopping at %d...\n\n", end);
    printf("This loop did %d iterations.", loop);
}
