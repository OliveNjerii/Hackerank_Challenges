/* program to find the largest element in an array */

#include<stdio.h>
#include<stdlib.h>

int max_of_four(int arr[], int n) {
	int arr[4]= {3, 8, 9, 2};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i;
	int max=arr[0];
	
}

int main() {

	int a[4];
	printf("enter 4 numbers separated by a space:\n");
	scanf("%d %d %d %d" , &a[0], &a[1], &a[2], &a[3]);
	


	for( int i=0; i<a-1; i++)
	{
		int max;
		max=a[0];
		if (a[i] > max)
		{
			a[i]=max;
		}
		printf("%d is the largest element in the array", a[i]);
	}
	return 0;
}
