#include <stdio.h>

int main(){
    
    int num;
    int sum = 0, count = 0;
    
    while (1){
        printf("Number (-1 to stop)?\n");
        scanf("%d", &num);
        
        if (num == -1){
            if (count == 0){
                printf("No numbers input.");
                return 1;
            }
            
            break;
        }
        
        sum += num;
        count++; 
    }
    
    int ave = (int) sum / count;
    
    if (count == 1){
        printf("\nThe average of the 1 number input is %d", ave);
    }
    else {
        printf("\nThe average of the %d numbers input is %d", count, ave);
    }
    
    return 0;
}
