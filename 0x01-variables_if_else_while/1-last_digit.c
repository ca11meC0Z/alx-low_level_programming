#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;
        int ld;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        ld = n % 10;

        if (n > 5)
        {
                printf("Last digit of n is greater than\n");
        }
        else if (n == 0)
        {
                printf("Last digit of n is 0\n");
        }
        else
        {
                printf("Last digit of n is less than 6 and not 0\n");
        }
        return (0);
}
