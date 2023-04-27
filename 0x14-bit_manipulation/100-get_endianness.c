#include "main.h"

int get_endianness(void)
{
	unsigned int i;
	char *ch;

	i = 1;
	ch = ((char*) &i);

	if (ch)
		return (1);

	return (0);
}
