#include <stdio.h> 

int main(void){
    
    int hour; 
    
    printf("How many hours did you spend studying for the test?\n");
    scanf("%d", &hour);
    
    if(hour >= 0 && hour <= 25){
        printf("%d hours is probably not enough!", hour);
    }
    
    else if (hour >= 26 && hour <= 39){
        
        printf("Good, but was it enough...");
    }
    
    else if (hour >= 40){
        printf("Excellent, you should be well prepared for the test!");
    }
    
    else {
        printf("Invalid, you cannot have studied a negative number of hours!");
    }
    
    return 0;
}
