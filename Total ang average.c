#include<stdio.h>

int main(){
	int a = 0 ;
	int b = 0;
	int c = 0;
	int d = 0;
	float e = 0;

	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
        
	d = a + b + c;
	e = (a + b + c) / 3;

	printf("Total: %d \n", d);
        printf("Average: %f", e);

	return 0 ;}


