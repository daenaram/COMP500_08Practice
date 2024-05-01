#include <stdio.h>

int main() {
    
    char i;
    
    while (1){
        printf("Type any key (~ to quit)...\n");
        scanf(" %c", &i);
        
        if (i >= 'a' && i <='z'){
            printf("That was a lowercase letter.\n\n");
        }
        
        else if (i >= 'A' && i <= 'Z'){
            printf("That was an uppercase letter.\n\n");
        }
        
        else if (i >= '0' && i <= '9'){
            printf("That was a digit.\n\n");
        }
        
        else {
            printf("That was something else!\n\n");
        }
        
        switch (i){
            case '~':
            printf("All done! Goodbye!");
            return 0;
        }
    }
    
    return 0;
}
