/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedros <pedros@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 14:44:49 by username          #+#    #+#             */
/*   Updated: 2026/11/26 18:07:30 by pedros           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

void	ft_push(t_list **first, t_list **second);
void	ft_swap(t_list **lst);
void	ft_rotate(t_list **lst);
void	ft_reverse_rotate(t_list **lst);

#endif
