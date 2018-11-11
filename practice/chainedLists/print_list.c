#include <stdio.h>
#include "list.h"

void	print_list(t_list *list)
{
	while (list)
	{
		printf("%s",(list->str));
		list = list->next;
	}
}
