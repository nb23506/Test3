#include <stdio.h>
#include <stdlib.h>

// Deklarasi fungsi dari program.c
int larger_number(int x, int y);

void run_tests() {
    // Test case 1: x = 3, y = 5
    printf("Test 1: ");
    int x = 3, y = 5;
    int result = larger_number(x, y);
    printf("Expected: 5, Got: %d\n", result);

    // Test case 2: x = 10, y = 7
    printf("Test 2: ");
    x = 10; y = 7;
    result = larger_number(x, y);
    printf("Expected: 10, Got: %d\n", result);

    // Test case 3: x = 4, y = 4
    printf("Test 3: ");
    x = 4; y = 4;
    result = larger_number(x, y);
    if (result == -1) {
        printf("Expected: Both numbers are equal: 4, Got: Both numbers are equal: 4\n");
    } else {
        printf("Expected: %d, Got: %d\n", (x > y ? x : y), result);
    }
}

int main() {
    run_tests();
    return 0;
}
