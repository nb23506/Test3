// test.c
#include <stdio.h>
#include <assert.h>

int add(int a, int b);

void run_tests() {
    assert(add(3, 4) == 7);
    assert(add(10, 20) == 30);
    assert(add(-5, 5) == 0);
    assert(add(0, 0) == 0);
    printf("All tests passed!\n");
}

int main() {
    run_tests();
    return 0;
}
