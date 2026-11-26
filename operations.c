/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedros <pedros@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 15:00:14 by username          #+#    #+#             */
/*   Updated: 2026/11/26 18:14:15 by pedros           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Needs this for delone function, but we don't want to touch content
// NEEDS CHANGING LATER

void	delete_lstcontent(void *content)
{
}

void	ft_push(t_list **first, t_list **second)
{
	t_list	*tmp;

	if (!*first)
		return ;
	ft_lstadd_front(second, ft_lstnew((*first)->content));
	tmp = (*first)->next;
	ft_lstdelone(*first, delete_lstcontent);
	*first = tmp;
}

//CANNOT DELETE CONTENT, IT IS A POINTER AND WILL BREAK

void	ft_swap(t_list **lst)
{
	void	*first_content;

	if (!(*lst) || !(*lst)->next)
		return ;
	first_content = (*lst)->content;
	(*lst)->content = (*lst)->next->content;
	(*lst)->next->content = first_content;
}

//NEED SEPERATION OF FIRST AND FIRST_CONTENT BECAUSE IT IS A POINTER

void	ft_rotate(t_list **lst)
{
	t_list	*first;
	void	*first_content;

	if (!*lst)
		return ;
	first_content = (*lst)->content;
	first = (*lst);
	while ((*lst)->next)
	{
		(*lst)->content = (*lst)->next->content;
		*lst = (*lst)->next;
	}
	(*lst)->content = first_content;
	*lst = first;
}

void	ft_reverse_rotate(t_list **lst)
{
	t_list	*first;
	void	*last_content;
	void	*previous_content;

	if (!*lst)
		return ;
	last_content = ft_lstlast(*lst)->content;
	first = (*lst);
	while ((*lst))
	{
		previous_content = (*lst)->content;
		(*lst)->content = last_content;
		last_content = previous_content;
		*lst = (*lst)->next;
	}
	*lst = first;
}
