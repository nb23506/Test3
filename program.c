#include <stdio.h>
#include <stdlib.h>

int larger_number(int x, int y) {
    if (x > y) {
        return x;
    } else if (y > x) {
        return y;
    } else {
        return -1; // Menandakan bahwa kedua angka sama
    }
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <integer x> <integer y>\n", argv[0]);
        return 1;
    }

    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    
    int result = larger_number(x, y);
    
    if (result == -1) {
        printf("Both numbers are equal: %d\n", x);
    } else {
        printf("The larger number is: %d\n", result);
    }

    return 0;
}
