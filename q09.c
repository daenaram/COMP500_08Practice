#include <stdio.h>
#include <string.h>

int main() {
    char input[20];

    printf("What month?\n");
    scanf("%s", input);

    int month;
    char monthName[20];

    if (sscanf(input, "%d", &month) == 1) {
        if (month >= 1 && month <= 12) {
            switch (month) {
                case 1: strcpy(monthName, "January"); break;
                case 2: strcpy(monthName, "February"); break;
                case 3: strcpy(monthName, "March"); break;
                case 4: strcpy(monthName, "April"); break;
                case 5: strcpy(monthName, "May"); break;
                case 6: strcpy(monthName, "June"); break;
                case 7: strcpy(monthName, "July"); break;
                case 8: strcpy(monthName, "August"); break;
                case 9: strcpy(monthName, "September"); break;
                case 10: strcpy(monthName, "October"); break;
                case 11: strcpy(monthName, "November"); break;
                case 12: strcpy(monthName, "December"); break;
            }
            printf("VALID: %s is a month.\n", monthName);
        } else {
            printf("INVALID: %d is not a month.\n", month);
        }
    } else {
        if (strcmp(input, "January") == 0 || strcmp(input, "February") == 0 ||
            strcmp(input, "March") == 0 || strcmp(input, "April") == 0 ||
            strcmp(input, "May") == 0 || strcmp(input, "June") == 0 ||
            strcmp(input, "July") == 0 || strcmp(input, "August") == 0 ||
            strcmp(input, "September") == 0 || strcmp(input, "October") == 0 ||
            strcmp(input, "November") == 0 || strcmp(input, "December") == 0) {
            printf("VALID: %s is a month.\n", input);
        } else {
            printf("INVALID: %s is not a month.\n", input);
        }
    }

    return 0;
}
