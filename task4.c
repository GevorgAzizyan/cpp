#include <stdio.h>

int main() {
    int x;
    int result;

    printf("Enter a value to use in expression: ");
    scanf("%d", &x);

    result = 4 * x + 21 * x * x - 12;

	    printf("the result is:  %d\n", result);

	    return 0;
}
    
