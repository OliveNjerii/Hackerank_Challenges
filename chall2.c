/* program that reads a char, string and sentence from the user and prints them to the screen*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char ch;
    char s[100];
    char sen[100];
    
    scanf("%c", &ch);
    printf("%c\n", ch);
    scanf("%s", s);
    printf("%s\n", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    
    printf("%s", sen);
      
    return 0;
}
