#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - generate passwords that are valid for 101-crackme
*
Return: Always 0
*/

int main(void)
{
	char psswd[84];
	int count;
	int sum;
	int half1;
	int half2;

	count = 0;
	sum = 0;

	srand(time(0));

	while (sum < 2772)
	{
		psswd[count] = 33 + rand() % 94;
		sum += psswd[count++];
	}

	psswd[count] = '\0';

	if (sum != 2772)
	{
		half1 = (sum - 2772) / 2;
		half2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			half1++;

		for (count = 0; psswd[count]; count++)
		{
			if (psswd[count] >= (33 + half1))
			{
				psswd[count] -= half1;
				break;
			}
		}
		for (count = 0; psswd[count]; count++)
		{
			if (psswd[count] >= (33 + half2))
			{
				psswd[count] -= half2;
				break;
			}
		}
	}

	printf("%s", psswd);

	return (0);
}
