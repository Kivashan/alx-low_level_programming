#include "3-calc.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc != 4 && !atoi(argv[1]) && !atoi(argv[3]))
		exit(98);
	if (!get_op_func(argv[2]))
		exit(99);
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
		exit(100);

	return (0);
}
