#include <stdio.h>

int main()
 {
    int rows = 5; 
    int number = 1;
    
    for (int i = 0; i < rows; i++)
	{
        
        for (int j = 0; j <= i; j++)
        
		 {
            printf("%d ", number);
            number++;
        }
        
        printf("\n");
    }

    return 0;
}

