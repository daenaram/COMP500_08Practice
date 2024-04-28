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




*** OR *** 



    
#include <stdio.h>

int main() {
    
    char text[100];
    int current = 0;
    
    printf("Text\n");
    scanf("%s", text);
    
    while (text[current] != '\0'){
        switch (text[current])
        {
            case 'a':
            case 'A':
                printf("$");
                break;
                
            case 'e':
            case 'E':
                printf("#");
                break;
                
            case 'I':
            case 'i':
                printf("@");
                break;
                
            case 'O':
            case 'o':
                printf("*");
                break;
                
            case 'U':
            case 'u':
                printf("=");
                break;
            default:
                printf("%c", text[current]);
        }
        ++current;
    }
    

    return 0;
}
