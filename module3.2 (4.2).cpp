#include <stdio.h>
int main(void)
{
    char a;
    printf("Enter char: ");
    scanf("%c",&a);
   
    if (a < 90){
        a = a+ 32;
    }
        switch(a)
	{
     
        case 'a':
            printf("Vowel\n");
            break;
        
        case 'e':
            printf("Vowel\n");
            break;
     
        case 'i':
            printf("Vowel\n");
            break;

        case 'o':
            printf("Vowel\n");
            break;

        case 'u':
            printf("Vowel\n");
            break;
     
        default:
            printf("Consonant\n");
            break;
    }

    return 0;
}
