#include <stdio.h>

int main(){
    
    int num = 40;
    
    while(num <= 400){
        printf("%d", num);
        
        if (num < 400){
            printf("\n");
        }
        
        num += 10;
    }
    
    printf("\n");
    
    return 0;
}
