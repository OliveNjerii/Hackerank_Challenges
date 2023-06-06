/*program to calculate the sum and differences of two ints and two floats */

#include<stdio.h>
#include<stdlib.h>

int main() {
	int a,b;
	float c,d;

	printf("Enter two integers separated by a space:\n");
	scanf("%d %d", &a, &b);
	printf("enter two floats separated by a space:\n");
	scanf("%0.1f %0.1f", &c, &d);
	int sum_ints=0;
	float sum_floats=0;
	int diff_ints;
	float diff_floats;

	sum_ints= a+b;
	sum_floats= c+d;
	diff_ints= a-b;
	diff_floats= c-d;

	printf("The sum and difference of the integers respectively is: %d %d\n", sum_ints, diff_ints);
	printf("The sum and difference of the floats respectively is: %f %f\n", sum_floats, diff_floats);

	return 0;

}
