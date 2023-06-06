/*program to reverse an array*/

#include<stdio.h>

int main() {

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter an integer: ");
        scanf("%d", &arr[i]);
    }
    
    int i, temp;
    for (i = 0; i < n/2; i++)
    {     
        temp= arr[i];
        arr[i]= arr[n-1-i];
        arr[n-1-i]= temp;
    }     

    printf("Reversed array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%2d", arr[i]);
    }
        
    return 0;
}