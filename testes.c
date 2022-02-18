#include <stdio.h>
#include "libft.h"

void del(void *content) {
	free(content);
}

int main() {

	t_list *head;
	head = ft_lstnew(ft_strdup("meu cu"));

	t_list	*new;
	new = ft_lstnew(ft_strdup("nosso cu"));

	t_list	*new2;
	new2 = ft_lstnew(ft_strdup("vosso cu"));

	t_list	*new3;
	new3 = ft_lstnew(ft_strdup("cu deles"));

	ft_lstadd_front(&head, new);
	ft_lstadd_front(&head, new2);
	ft_lstadd_front(&head, new3);
	
	printf("%s\n", head->content);
	printf("%s\n", head->next->content);
	printf("%s\n", head->next->next->content);
	printf("%s\n", head->next->next->next->content);

	printf("%i\n", ft_lstsize(head));

	t_list	*last;
	last = ft_lstlast(head);
	printf("o ultimo é: %s", last->content);


	t_list	*new4;
	new4 = ft_lstnew(ft_strdup("no meu cu"));

	ft_lstadd_back(&head, new4);



	printf("%s\n", head->content);
	printf("%s\n", head->next->content);
	printf("%s\n", head->next->next->content);
	printf("%s\n", head->next->next->next->content);
	printf("%s\n", head->next->next->next->next->content);

	ft_lstdelone(head->next->next->next->next, del);

	printf("%s\n", head->content);
	printf("%s\n", head->next->content);
	printf("%s\n", head->next->next->content);
	printf("%s\n", head->next->next->next->content);
	printf("%s\n", head->next->next->next->next->content);

}


/*void func(int *i) {
	*i = 10;
}

int main () {
	int i = 5;

	printf("%i\n", i);
	func(&i);
	printf("%i\n", i); 
}*/


// Heap = malloc
// Stack = outro