/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeuget <audrey.peuget@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:31:38 by ananselm          #+#    #+#             */
/*   Updated: 2026/01/04 16:53:49 by apeuget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_lstaddback_isdup(t_list **lst, t_list *new) // add the link to previous node
{
	if (!*lst || !new)
		return (0);
	while (*lst->next)
	{
		if (*lst -> number = *lst -> next -> number)
			return (0);
		*lst = *lst -> next;
	}
	*lst -> next -> prev = lst; // Does that make sens ??
	*lst -> next = new;
	return (1);
}

int	ft_isnumber(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (arg[0] == '-' && arg[1] == '-')
			return (2);
		if (!(ft_isdigit(arg[i]) || arg[i] == ' '))
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int			i;
	number_list	*lst_head;
	number_list	*new_node;
	char **split_args;
	int arg_count;

	i = 0;
	while (argv[i])
	{
		if (!ft_isnumber(argv[i]))
		{
			ft_printf("you suck");
			return (1);
		}
		if (ft_isnumber(argv[i]) == 2)
			break;
		i++;
	}
	if (argc == 2)
	{
		split_args = ft_split(argv[1], ' ');
		arg_count = 0;
		while (split_args[arg_count++])
		{
			new_node = ft_lstnew(split_args[arg_count]);
			if (!new_node)
				return (0);
			if (!(ft_lstaddback_isdup(&lst_head, new_node)))
				free(lst_head); // create ft to free the whole linked list ?
		}
	}
	else if (argc > 2)
	{
		i = 0;
		while (argv[i])
		{
			new_node = ft_lstnew(argv[i])
			if (!(ft_lstaddback_isdup(&lst_head, new_node)))
				free(lst_head); // create ft to free the whole linked list ?
			i++;
		}
	}
	return (0);
}

// notre liste :
typedef	struct s_list
{
	number_list *prev;
	int	nb;
	number_list *next;
} number_list;

