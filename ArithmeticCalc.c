#include <stdio.h>

int main()
{
    int a, b;
    int sum = 0, sub = 0, mul = 0, div = 0;
 
    printf("Please enter the two values:");
    
   /* Read input */
   scanf("%d%d", &a, &b);
    sum = a+b;
    sub = a-b;
    mul = a*b;
    // verify that the denominator is not zero
    if(b != 0)
    {
    div = a/b; // now carry out the division
    }
    else
    {
        printf("\nCannot divide by 0\n");
    }

    /* Print output */
    printf("The sum = %d \nsub = %d \nmul = %d \ndiv = %d", sum, sub, mul,div);
    
    return 0;
}