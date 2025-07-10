#include <stdio.h>

int main(){

    printf("Please input lowercase letter \n");
    char letter = '\0';
    scanf("%c", &letter);
    letter = letter - 32;
    printf("Get the uppercase letter %c \n", letter);

    return 0;
}
