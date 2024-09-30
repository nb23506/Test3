#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_OUTPUT_LENGTH 100

void test_case(int x, int y, const char *expected_output) {
    char command[MAX_OUTPUT_LENGTH];
    char output[MAX_OUTPUT_LENGTH];

    // Prepare the command to run the program
    snprintf(command, sizeof(command), "./larger_number %d %d", x, y);

    // Run the program and capture the output
    FILE *fp = popen(command, "r");
    if (fp == NULL) {
        perror("popen failed");
        return;
    }

    // Read the output from the program
    fgets(output, sizeof(output), fp);
    pclose(fp);

    // Compare the expected output with the actual output
    if (strcmp(output, expected_output) == 0) {
        printf("Test case passed: x = %d, y = %d\n", x, y);
    } else {
        printf("Test case failed: x = %d, y = %d\nExpected: %sGot: %s\n", x, y, expected_output, output);
    }
}

int main() {
    // Example test cases
    test_case(3, 5, "The larger number is: 5\n");
    test_case(10, 7, "The larger number is: 10\n");
    test_case(4, 4, "Both numbers are equal: 4\n");

    return 0;
}
