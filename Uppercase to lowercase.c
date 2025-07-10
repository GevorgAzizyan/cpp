#include <stdio.h>

int main(){

    printf("Please input uppercase letter \n");
    char letter = '\0';
    scanf("%c", &letter);
    letter = letter + 32;
    printf("Get the lowercase letter %c \n", letter);

    return 0;
}

