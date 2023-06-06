/*program that takes a five digit integer and prints the sum of its digits */

#include<stdio.h>

int main() {
	int n, remainder, sum=0;
	printf("Enter a 5 digit number: \n");
	scanf("%d", &n);
	
	while(n>0) {
		remainder= n%10;
		sum=sum+remainder;
		n=n/10;
	}
	printf("Sum of the five digits is: %d \n", sum);

	return 0;
}
