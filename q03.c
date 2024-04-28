#include <stdio.h>

void classify_character(char ch)

{
    if (ch >= 'a' && ch <= 'z')
        printf("Input is Lowercase.\n");
    else if (ch >= 'A' && ch <= 'Z')
        printf("Input is Uppercase.\n");
    else if (ch >= '0' && ch <= '9')
        printf("Input is Digit.\n");
    else if (ch == ' ')
        printf("Input is space.\n");
    else if (ch < 32 || ch == 127)
        printf("Input is non-printable.\n");
    else if ((ch >= 33 && ch <= 47) || 
             (ch >= 58 && ch <= 64) || 
             (ch >= 91 && ch <= 96) || 
             (ch >= 123 && ch <= 126))
        printf("Input is Symbol.\n");
    else
        printf("Input is unknown.\n");
}

int main() {
    char ch;

    printf("Input a character: \n");
    scanf("%c", &ch);

    classify_character(ch);

    return 0;
}
