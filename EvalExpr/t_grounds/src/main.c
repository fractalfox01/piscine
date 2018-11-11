#include <stdio.h>
#include "../includes/test_header.h"

int		main(int argc, char **argv)
{
	int next;

	next = 0;
	if (argc > 1)
	{
		deconstruct(argv[1]);
		printf("index of first bracket: %d\n", next_bracket(argv[1], 0));
	}

	return (0);
}
