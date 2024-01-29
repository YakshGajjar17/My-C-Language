#include <stdio.h>

void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n, int order)
 {
    for (int i = 0; i < n - 1; i++)
	 {
        for (int j = 0; j < n - i - 1; j++) 
		{
            
            if (order == 1 ? arr[j] > arr[j + 1] : arr[j] < arr[j + 1]) 
			{
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}


void inputArray(int arr[], int n)
 {
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int n)
 {
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++)
	 {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size];
   
    printf("\nInput for Array 1:\n");
    inputArray(arr1, size);

    printf("\nInput for Array 2:\n");
    inputArray(arr2, size);

    int choice;
    printf("\nEnter the sorting order (1 for ascending, 2 for descending): ");
    scanf("%d", &choice);
    
    bubbleSort(arr1, size, choice);
    bubbleSort(arr2, size, choice);

    printf("\nSorted Array 1:\n");
    printArray(arr1, size);

    printf("\nSorted Array 2:\n");
    printArray(arr2, size);

    return 0;
}

