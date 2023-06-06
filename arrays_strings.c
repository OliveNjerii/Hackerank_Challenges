/*program to practice 1D arrays in C*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *arr= (int *) malloc(n * sizeof(int));
    int i;
    // int size= sizeof(*arr)/sizeof(arr[i]);
    int sum =0;
    for(int i=0; i<n; i++) {
        
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
        sum= sum+arr[i];
        }      
    
    printf("The sum of the elements you gave is: %d\n", sum);
    free(arr);
    return 0;
}