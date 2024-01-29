#include <stdio.h>

int findMax(int arr[], int size)
 {
    int max = arr[0];

    for (int i = 1; i < size; i++) 
	{
        if (arr[i] > max)
		 {
            max = arr[i];
        }
    }

    return max;
}

int main()
 {
    
    int array[] = {45, 12, 67, 89, 34, 21};
    int size = sizeof(array) / sizeof(array[0]);
   
    int maxValue = findMax(array, size);
   
    printf("The maximum number in the array is: %d\n", maxValue);

    return 0;
}

