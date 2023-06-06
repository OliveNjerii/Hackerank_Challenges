#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    printf("Enter a number n: ");
    scanf("%d", &n);

    int start, end, size;
    start=0;
    size= (2*n)-1;
    end=size-1;
    
    int num= n;
  	// Complete the code to print the pattern.
    int arr[size][size];
    
    while ( start <=end) {
        for (int i=start; i<=end; i++) {
            for (int j=start; j<=end; j++) {
                if (i==start || i==end || j==start || j==end) {
                    arr[i][j]= num;
                }

                else {
                    arr[i][j]= num-1;
                }
            }
        }
        ++start;
        --end;
        --num;
    }
    
    for (int i=0; i<size; i++) {
        for (int j=0; j<size; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

