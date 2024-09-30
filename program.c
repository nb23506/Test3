#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usagee: %s <integer x> <integer y>\n", argv[0]);
        return 1;
    }

    int x = atoi(argv[1]); // Convert the first argument to an integer
    int y = atoi(argv[2]); // Convert the second argument to an integer

    // Use if statement to determine the larger number
    if (x > y) {
        printf("The larger number is: %d\n", x);
    } else if (y > x) {
        printf("The larger number is: %d\n", y);
    } else {
        printf("Both numbers are equal: %d\n", x);
    }

    return 0;
}
