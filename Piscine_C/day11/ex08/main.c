#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list);

int main(void)
{
	t_list* my_list = ft_create_elem("aaaaa");
	my_list->next = ft_create_elem("bbbb");
	my_list->next->next = ft_create_elem("zccccc");
	ft_list_reverse(&my_list);

	for (t_list* iter = my_list; iter != 0; iter = iter->next)
		printf("%s\n", (char*)iter->data);

	return 0;
}
