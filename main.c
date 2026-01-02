/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeuget <audrey.peuget@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:31:38 by ananselm          #+#    #+#             */
/*   Updated: 2026/01/02 20:01:30 by apeuget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstaddback_modif(t_list **lst, t_list *new)
{
	if (!lst || !*lst)
		return (0);
	while (*lst)
	{
		lst = lst -> next;
	}
	lst -> next = new;
}

int	ft_isnumber(int argc, char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (!(ft_isdigit(argv[i]) || argv[i] == ' '))
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (!ft_isnumber(argc, argv[i]))
		{
			ft_printf("you suck");
			return (1);
		}
		i++;
	}
	ft_lstadd
	ft_isduplicate()
	return (0);
}
