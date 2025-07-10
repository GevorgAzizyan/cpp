#include <stdio.h>

int main() {
    float x;
    float result;

    printf("Enter a value to use in expression: ");
    scanf("%f", &x);

    result = (x / (5 + 2) + 30 * x - 51);

            printf("the result is:  %f\n", result);

            return 0;
}

