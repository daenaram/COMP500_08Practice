#include <stdio.h>

int main(){

    int x = 0, y = 0;
    char player;

    printf("The player starts at (%d, %d)...\n", x, y);

    while (1){
        printf("Player at (%d, %d) - move N,S,E,W (q to quit)?\n", x, y);
        scanf(" %c", &player);

        switch (player){

            case 'N':
            y++;
            break;

            case 'S':
            y--;
            break;

            case 'E':
            x++;
            break;

            case 'W':
            x--;
            break;

            case 'q':
            case 'Q':
            printf("The player ends at (%d, %d)", x, y);
            goto end_loop;
        }
    }
    end_loop:

    return 0;
}
