#include <stdio.h>
int main (void)
{
    int i,sum;

    sum = 0;
    for (i = 1; i <= 10; i++)
        sum += i;

    printf("Sum of integers from 1 to 10 = %d\n", sum);

    return 0;
}
