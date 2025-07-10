#include <stdio.h>

int main(){

	int a = 0;
	int b = 0;
	int c = 0;

	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	c = a % b;
	printf("Reminder: %d ", c);

	return 0;}

