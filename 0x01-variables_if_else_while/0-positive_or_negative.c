#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main-Entery point
 *
 * Return:Always 0 (Success)
 */
int main()
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        if (n>0)
        {
                printf("%d is positive",n);
        }
        if (n<0)
        {
                printf("%d is negative", n);
        }
        if (n==0)
	{
		printf("%d is zero",n);
	}
        return (0);
}


