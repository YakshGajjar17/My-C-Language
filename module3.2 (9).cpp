#include <stdio.h>

int calculateSum(int num)
 {
    int sum = 0;
    
    for (int i = 1; i <= num; ++i)
	 {
        sum += i;
    }

    return sum;
}

int main()
 {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
   
    int sum = calculateSum(num);
    printf("Summation of %d: %d\n", num, sum);

    return 0;
}

