#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int result = 0;

    printf("Enter length and width: \n ");
    scanf("%d %d", &a, &b);

    result = a * b;

    printf("the area equal to :  %d\n", result);

    return 0;
}


