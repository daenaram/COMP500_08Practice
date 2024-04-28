#include <stdio.h>
#include <string.h> 

int main() {
    char input[80];
    
    printf(">\n");
    fgets(input, sizeof(input), stdin);
    
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == 'A' || input[i] == 'a') {
            input[i] = '$';
        }
        else if (input[i] == 'E' || input[i] == 'e') {
            input[i] = '#';
        }
        else if (input[i] == 'I' || input[i] == 'i') {
            input[i] = '@';
        }
        else if (input[i] == 'O' || input[i] == 'o') {
            input[i] = '*';
        }
        else if (input[i] == 'U' || input[i] == 'u') {
            input[i] = '=';
        }
    }
    
    printf("%s\n", input);
    
    return 0;
}
