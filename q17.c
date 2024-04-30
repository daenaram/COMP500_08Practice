#include <stdio.h>
#include <string.h>

int main(){

    char month[100];

    printf("What month?\n");
    scanf("%99s", month);

    int imonth;
    char nmonth[100];

    if (sscanf(month, "%d", &imonth) == 1){

        if (imonth >= 1 && imonth <= 12){
            switch (imonth)
            {
            case 1: strcpy(nmonth, "January"); break;
            case 2: strcpy(nmonth, "Feruary"); break;
            case 3: strcpy(nmonth, "March"); break;
            case 4: strcpy(nmonth, "April"); break;
            case 5: strcpy(nmonth, "May"); break;
            case 6: strcpy(nmonth, "June"); break;
            case 7: strcpy(nmonth, "July"); break;
            case 8: strcpy(nmonth, "August"); break;
            case 9: strcpy(nmonth, "September"); break;
            case 10: strcpy(nmonth, "October"); break;
            case 11: strcpy(nmonth, "November"); break;
            case 12: strcpy(nmonth, "December"); break;
            }

            printf("VALID: %s is a month", nmonth);
        }

        else {

            printf("INVALID: %d is not a month", imonth);
        }
    }
    
    
    
    else {
        if ((strcmp(month, "January") == 0) || (strcmp(month, "February") == 0) || 
            (strcmp(month, "March") == 0) || (strcmp(month, "April") == 0) || 
            (strcmp(month, "May") == 0) || (strcmp(month, "June") == 0) || 
            (strcmp(month, "July") == 0) || (strcmp(month, "August") == 0) || 
            (strcmp(month, "September") == 0) || (strcmp(month, "October") == 0) || 
            (strcmp(month, "November") == 0) || (strcmp(month, "December") == 0))
        {
            printf("VALID: %s is a month", month);
        }

        else {
            printf("INVALID: %s is not a month", month);
        }
    }
}
