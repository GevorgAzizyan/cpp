#include<stdio.h>
#define PI 3.14
int main(){

	int r = 0;
	float area = 0;
	printf("Enter the radius: ");
	scanf("%d", &r);
	area = PI * r * r;
	printf("Area: %f ", area);

	return 0;}


