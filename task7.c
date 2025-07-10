#include <stdio.h>

int main(){

    float x = 0;
    float y = 0;
    float result = 0;

    printf("Please input the first value to use in expression \n");
    scanf("%f", &x);
    printf("Please input the second value to use in expression \n");
    scanf("%f", &y);

    result = (x + y) / 2;
    printf("The result is %f \n", result);

    return 0;

}

