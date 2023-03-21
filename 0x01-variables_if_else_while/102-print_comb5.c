#include<stdio.h>
/**
 *main - entry point
 *
 * description: print 0-9 using putchar
 *              while using int variable
 *
 * return: Always 0 (success)
 */

int main(void)
{
	int firstDigit = 0, seconDidit;

	while (firstDigit <= 99)
	{
		seconDidit = firstDigit;
		while (seconDidit <= 99)
		{
			if (seconDidit != firstDigit)
			{
				putchar((firstDigit / 10) + 48);
				putchar((firstDigit % 10) + 48);
				putchar(' ');
				putchar((seconDidit / 10) + 48);
				putchar((seconDidit % 10) + 48);

				if (firstDigit != 98 || seconDidit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			seconDidit++;
		}
		firstDigit++;
	}
	putchar('\n');

	return (0);
}
