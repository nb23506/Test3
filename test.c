#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void run_tests() {
    // Test case 1: x = 3, y = 5
    printf("Test 1: ");
    int x = 3, y = 5;
    if (x > y) {
        printf("Expected: 3, Got: %d\n", x);
    } else {
        printf("Expected: 5, Got: %d\n", y);
    }

    // Test case 2: x = 10, y = 7
    printf("Test 2: ");
    x = 10; y = 7;
    if (x > y) {
        printf("Expected: 10, Got: %d\n", x);
    } else {
        printf("Expected: 7, Got: %d\n", y);
    }

    // Test case 3: x = 4, y = 4
    printf("Test 3: ");
    x = 4; y = 4;
    if (x == y) {
        printf("Expected: Both numbers are equal: 4, Got: Both numbers are equal: 4\n");
    } else {
        printf("Expected: %d, Got: %d\n", (x > y ? x : y), (x > y ? x : y));
    }
}

int main() {
    run_tests();
    return 0;
}
