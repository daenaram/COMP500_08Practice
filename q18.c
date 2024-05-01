#include <stdio.h>

int main() {
    char word[100]; 
    printf("Input a word: ");
    scanf("%s", word);
    
    int count = 0;
    while (word[count] != '\0') {
        count++;
    }

    printf("%s is %d characters in length.\n", word, count);
    
    return 0;
}
