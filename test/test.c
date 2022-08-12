#include	<stddef.h>
#include	<stdlib.h>
#include	<stdio.h>

typedef struct s_list
{
	int				val;
	struct s_list	*prev;
	struct s_list	*next;
} t_list;

t_list	*dynamic_list(t_list *current, int i)
{
	printf("Inicio da funcao dynamic list\n");
	printf("Contador i: %d\n", i);
	if (current == NULL)
	{
		current = malloc(sizeof(t_list));
		current->val = i;
		current->prev = NULL;
		printf("Entrou no current = null\n");
	}
	else
	{
		current->next = malloc(sizeof(t_list));
		current->next->prev = current;
		current = current->next;
		current->val = i;
		printf("Entrou no current diferente de null\n");
	}
	return (current);
}

void	printAllList(t_list *list)
{
	printf("Entrou na funcao printAllList\n");
	while (list)
	{
		if (list->prev == NULL)
			printf("Primeiro nó vazio\n");
		else
			printf("Valor do nó anterior: %d\n", list->prev->val);
		printf("Valor do nó: %d\n", list->val);
		list = list->next;
	}
}

void	freeAllList(t_list *head)
{
	t_list	*current_list;
	t_list	*next_list;

	current_list = head;
	while (current_list != NULL)
	{
		next_list = current_list->next;
		free(current_list);
		current_list = next_list->next;
	}
}

int	main(void)
{
	int		i;
	t_list	*head;
	t_list	*current;

	i = 0;
	head = NULL;
	current = NULL;
	while (i < 10)
	{
		if (head == NULL)
		{
			head = dynamic_list(head, i);
			if (head != NULL)
				current = head;
		}
		else
		{
			current->next = dynamic_list(current, i);
			if (current->next != NULL)
				current = current->next;
		}
		i++;
	}
	printAllList(head);
	freeAllList(head);
	return (0);
}
