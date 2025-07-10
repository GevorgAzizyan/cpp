#include<stdio.h>

int main(){
	int a = 0;
	int b = 0;

	printf("Enter a number: ");
	scanf("%d", &a);
	b = a * a * a;
	printf("Cube: %d", b);

	return 0;}
