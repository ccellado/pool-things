#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)());

int main(int argc, char **argv)
{
	t_list *l1 = 0;
	t_list *l2;
	printf("%s,", (char*)argv[1]);
	printf("\n");

	l2 = ft_create_elem("daaaa");
	l2->next = ft_create_elem("dccc");
	l2->next->next = ft_create_elem("dzzzz");
	ft_sorted_list_insert(&l2, argv[1], (int(*)())strcmp);

	for (t_list* iter = l2; iter != 0; iter = iter->next)
		printf("%s,", (char*)iter->data);
	printf("\n");

	return 0;
}
