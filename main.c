/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedros <pedros@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 14:43:30 by username          #+#    #+#             */
/*   Updated: 2026/11/26 18:15:36 by pedros           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//This needs to be cahnged later

void	print_stacks(t_list *a, t_list *b)
{
	t_list	*current_a;
	t_list	*current_b;

	current_a = a;
	current_b = b;
	printf("Stack A    Stack B\n");
	while (current_a || current_b)
	{
		if (current_a)
		{
			printf("A:%s", (char *) current_a->content);
			current_a = current_a->next;
		}
		if (current_b)
		{
			printf("          B:%s", (char *) current_b->content);
			current_b = current_b->next;
		}
		printf("\n");
	}
	printf("\n\n\n");
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;

	i = 1;
	stack_a = NULL;
	stack_b = NULL;
	while (argc > i)
	{
		ft_lstadd_back(&stack_a, ft_lstnew(argv[i]));
		i++;
	}
	print_stacks(stack_a, stack_b);
	printf("Rotating A\n\n");
	ft_rotate(&stack_a);
	print_stacks(stack_a, stack_b);
}
