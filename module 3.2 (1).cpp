#include <stdio.h>

int main(void)
{

    char cal;
    int n1,n2;
    
    printf("Enter operator (+,-,/,*)");
    scanf("%c",&cal);
    
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);

    if(cal == '+')
	{
        printf("Addition: %d\n",n1+n2);
    }

    else if (cal == '-')
	{
        printf("Subtraction: %d\n",n1-n2);
    }

    else if(cal == '*')
	{
        printf("Multiplication: %d\n",n1*n2);
    }

    else if(cal == '/')
	{
        printf("Division is %d\n",n1/n2);
    }

    else
	{
        printf("Modulo is: %d\n",n1%n2);
    }

    return 0;
}
