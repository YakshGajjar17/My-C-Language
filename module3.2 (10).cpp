#include <stdio.h>

// Function to calculate the summation of first and last digits
int calculateSumOfFirstAndLastDigit(int num) {
    int lastDigit = num % 10;

    // Calculate the number of digits
    int temp = num;
    int numberOfDigits = 0;
    while (temp != 0) {
        temp /= 10;
        numberOfDigits++;
    }

    // Calculate the first digit
    int firstDigit = num / (10, numberOfDigits - 1);

    return firstDigit + lastDigit;
}

int main() {
    int num;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for non-positive input
    if (num <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        // Calculate and print the summation of first and last digits
        int sum = calculateSumOfFirstAndLastDigit(num);
        printf("Sum of first and last digits of %d: %d\n", num, sum);
    }

    return 0;
}

