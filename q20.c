#include <stdio.h>
#include <string.h>

int main() {
    
    char colour1[10];
    char colour2[10];
    char same[10];
    
    printf("First colour?\n");
    scanf("%s", &colour1);
    
    printf("Second colour?\n");
    scanf("%s", &colour2);
    
    if (((colour1 == "Yellow") == 0) || ((colour1 == "Red") == 0) ||
        ((colour1 == "Blue") == 0) || ((colour2 == "Yellow") == 0) ||
        ((colour2 == "Red") == 0) || ((colour2 == "Blue") == 0))
        {
            if ((strcmp(colour1, "Yellow") == 0) && (strcmp(colour2, "Red") == 0) || (strcmp(colour1, "Red") == 0) && (strcmp(colour2, "Yellow") == 0))
            {
                printf("\n%s and %s mix to make Orange", colour1, colour2);
            }
            
            else if ((strcmp(colour1, "Red") == 0) && (strcmp(colour2, "Blue") == 0) || (strcmp(colour1, "Blue") == 0) && (strcmp(colour2, "Red") == 0))
            {
                printf("\n%s and %s mix to make Violet", colour1, colour2);
            }
            
            else if ((strcmp(colour1, "Blue") == 0) && (strcmp(colour2, "Yellow") == 0) || (strcmp(colour1, "Yellow") == 0) && (strcmp(colour2, "Blue") == 0))
            {
                printf("\n%s and %s mix to make Green", colour1, colour2);
            }
            
            else 
            {
                printf("%s is not a primary colour", colour1);
            }
        }

        else if (strcmp(colour1, colour2) == 0)
        {
            printf("\n%s and %s mix to make %s", colour1, colour1, colour1);
        }
    
    return 0;
}
