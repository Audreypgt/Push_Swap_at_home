/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeuget <audrey.peuget@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 12:42:49 by apeuget           #+#    #+#             */
/*   Updated: 2026/01/02 17:17:11 by apeuget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isonlydigit(char *nb)
{
	int	i;

	i = 0;
	while (nb[i])
	{
		if (!ft_isdigit(nb[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_isduplicate(int *tab, int argc)
{
	while (argc < 0)
	{

	}
}

int	ft_isseveralargs(char *str)
{
	int	i;
	int	arg;

	i = 0;
	arg = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (ft_isdigit(str[i]) && str[i + 1] == ' ')
			arg++;
		i++;
	}
	if (arg < 1)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	char	**split_arg;
	int		*tab;
	list_nombre *aled;

	if (argc == 2 && ft_isseveralargs(argv[1]) && ft_isonlydigit(argv[1]))
	{
		int	newargc;

		newargc = 0;
		aled = create_liste(ft_split(argv[1]));
		if (!aled)
		{
			//message d'erreur
		}
	}
	// si on a que 1 arg, on verifie si cest plusieurs arg ou pas
	// la le soucis cest quon rentre dans le 2e if du coup, ce qui pourrait etre bien
	// mais faudrait pouvoir utiliser split_arg a la place de argv dans ce cas
	if (argc > 2)
	{
		i = 0;
		while (argv[i])
		{
			if (!ft_isonlydigit(argv[i]))
				return (0);
			argv[i] = ft_atoi(argv[i]);
			i++;
		}
	}
	while (argv[i])
	{
		tab[i] = ft_itoa(argv[i]);
		i++;
	}
	//est ce quon doit pas mettre cette boucle while dans nos if ? comment on gere le fait quon a 2 if ?
	if (ft_isduplicate(tab, argc))
		return (0);
	return (0);
}
