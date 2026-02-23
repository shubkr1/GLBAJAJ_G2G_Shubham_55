#include <stdio.h>

int main() {
    int a;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &a);

    if (a < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= a; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", a, factorial);
    }

    return 0;
}