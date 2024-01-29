#include <stdio.h>

int main(void)
{
    int a,b;
    a = 20;
    b = 40;
    printf("Before: A=%d, B=%d\n",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After: A=%d, B=%d\n",a,b);
    return 0;
}
