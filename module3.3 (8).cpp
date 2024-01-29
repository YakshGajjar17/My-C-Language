#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

void reverseString(char str[])
 {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end)
	 {
        
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
       
        start++;
        end--;
    }
}

int isPalindrome(char str[])
 {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) 
	{
        
        
        if (str[start] != str[end])
		 {
            return 0;
        }

       
        start++;
        end--;
    }

    return 1; 
}

int main()
 {
    char inputString[MAX_LENGTH];

    printf("Enter a string: ");
    scanf("%s", inputString);
    
    reverseString(inputString);

    printf("Reversed String: %s\n", inputString);
    
    if (isPalindrome(inputString))
	{
        printf("The original string is a palindrome.\n");
    } 
	else
	{
        printf("The original string is not a palindrome.\n");
    }

    return 0;
}

