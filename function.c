#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 10, sum;
    sum = add(x, y);
    printf("The sum of %d and %d is %d.", x, y, sum);
    return 0;
}
