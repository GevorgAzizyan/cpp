#include <stdio.h>

int main() {
    float a = 0;
    float result = 0;

    printf("Enter temperature degree in C: \n ");
    scanf("%f", &a);

    result = (a * 9/5 + 32);

    printf("Temperature degree in F equal to :  %f\n", result);

    return 0;
}

