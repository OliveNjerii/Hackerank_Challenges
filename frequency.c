/*program that checks for the frequency of digits in an array*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){


    char *num= malloc(sizeof(char) * 100);
    printf("Enter a string:");
    scanf("%s", num);
    int frequency[10] = {0};
    int i;

    for (i = 0; i < strlen(num); i++)
    {
        if (num[i] >= '0' && num[i]<='9')
        {
            int int_converted= num[i]-'0';
            frequency[int_converted]++;
        }
    }

    for (int i = 0; i <=9 ; i++)
    {
        printf("%d ", frequency[i]);
    }
    printf("\n");
    free(num);
    return 0;
}