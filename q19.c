#include <stdio.h>

int main() {
    int array[5];

    for (int current = 0; current < 5; current++) {
        printf("Input %d? ", current);
        scanf("%d", &array[current]);
    }

    int found_at = -1;
    int search_key;

    printf("Search for? ");
    scanf("%d", &search_key);

    for (int i = 0; i < 5; i++) {
        if (array[i] == search_key) {
            found_at = i;
            break;
        }
    }

    if (found_at == -1) {
        printf("Not found!\n");
    } else {
        printf("%d found at element %d\n", search_key, found_at);
    }

    return 0;
}
