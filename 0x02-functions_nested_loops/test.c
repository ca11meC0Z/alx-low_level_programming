#include <stdio.h>

int main(void)
{
	int x;

	printf("enter number");
	scanf("%d", &x);
		if (x < 0)
		{
			printf("The absolut value of your number is %d\n", -x);
		}
		else
		{
			printf("your number is %d\n", x);
		}
		return (0);
}
