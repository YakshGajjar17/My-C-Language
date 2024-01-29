#include <stdio.h>

void triangle();
void rectangle();
void circle();
void triangle()
{
    int expression,h, b;
    printf("Enter height and breadth: ");
    scanf("%d %d",&h,&b);
    expression = 0.5 * h *b;
    printf("The area of triangle is %d\n",expression);
}

void rectangle()
{
    int expression,l, b;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d",&l,&b);
    expression = l*b;
    printf("The area of rectangle is %d\n",expression);
}

void circle()
{
    int expression, r;
    printf("Enter radius of the circle: ");
    scanf("%d",&r);
    expression = 3.14 * r *r ;
    printf("The area of circle is %d\n",expression);
}
int main(void)
{
    int choice;
    
    printf("Choices: \n");
    printf("1. Area of Triangle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Circle\n\n\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
   
    if(choice == 1)
	{
        triangle();
    }
    
    else if (choice == 2)
	{
        rectangle();
    }
    
    else if(choice == 3)
	{
        circle();
    }
    
    else
	{
        printf("Invalid choice.");
    }

    return 0;
}




