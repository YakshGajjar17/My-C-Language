#include <stdio.h>

void printReverse(int num)
 {
    int reversed = 0;
    
    while (num != 0) 
	{
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    printf("Number in reverse order: %d\n", reversed);
}

int main()
 {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printReverse(num);

    return 0;
}

