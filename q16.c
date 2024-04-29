#include <stdio.h>
#include <string.h>

int main() {

    char first_word[100];
    char second_word[100];

    printf("Input a word:\n");
    scanf("%99s", first_word);
    printf("Input another word:\n");
    scanf("%99s", second_word);
    
    
    if (strcmp(first_word, second_word) == 0){
        printf("The words are identical!");
    }
    else {
        printf("The words are different!");
    }
    return 0;
}
