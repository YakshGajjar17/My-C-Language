#include <stdio.h>

int main(void)
{
    int principal;
    float rate,term,result;

    printf("Enter principal, rate of interest, term in year: ");
    scanf("%d %f %f",&principal,&rate,&term);
    result = (principal * rate * term) / 100;
    printf("Your Total interest is %.2f\n",result);
    printf("Your endbalance is %.2f\n",result+principal);

    return 0;
}
