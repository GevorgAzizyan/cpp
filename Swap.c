#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;

    printf("Enter two numbers:\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("Before Swap: a = %d, b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swap: a = %d, b = %d\n", a, b);

    return 0;
}

