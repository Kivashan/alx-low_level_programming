#include <stdio.h>

int main(void)
{
	int tmp = 1231952;
	int factor = 2;

	for (factor = 2; factor <= tmp; factor++)
	{
		if (tmp % factor == 0)
		{
			printf("%d ", factor);
			tmp = tmp / factor;
			factor--;
		}
	}
	return 0;
}
