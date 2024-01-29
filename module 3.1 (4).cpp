#include <stdio.h>

int main(void)
{
    char op;
    int n1,n2;
    
    printf("Enter operator (+,-,/,*)");
    scanf("%c",&op);
    
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);

    if(op == '+')
	{
        printf("Addition: %d\n",n1+n2);
    }

    else if (op == '-')
	{
        printf("Subtraction: %d\n",n1-n2);
    }

    else if(op == '*')
	{
        printf("Multiplication: %d\n",n1*n2);
    }

    else if(op == '/')
	{
        printf("Division is %d\n",n1/n2);
    }

    else
	{
        printf("Modulo is: %d\n",n1%n2);
    }

    return 0;
}
