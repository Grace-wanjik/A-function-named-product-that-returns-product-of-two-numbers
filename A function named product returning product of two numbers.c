#include <stdio.h>

int product(int a, int b) {
    // Returns the product of two numbers
    return a * b;
}

int main() {
    int a, b, result;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    result = product(a,b);
    printf("The product of %d and %d is %d\n", a, b, result);
    return 0;
}
