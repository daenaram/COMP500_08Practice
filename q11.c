#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    printf("Enter the first angle (in degrees):\n");
    scanf("%d", &angle1);
    printf("Enter the second angle (in degrees):\n");
    scanf("%d", &angle2);
    printf("Enter the third angle (in degrees):\n\n");
    scanf("%d", &angle3);

    if ((angle1 + angle2 + angle3 == 180) && (angle1 > 0 && angle2 > 0 && angle3 > 0)) {
        if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
            printf("%d, %d, and %d is a valid right-angle triangle.\n", angle1, angle2, angle3);
        } else {
            printf("%d, %d, and %d is a valid triangle.\n", angle1, angle2, angle3);
        }
    } else {
        printf("%d, %d, and %d is not a valid triangle.\n", angle1, angle2, angle3);
    }

    return 0;
}
