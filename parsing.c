int	ft_isseveralargs(char *str)
{
	int	i;
	int	arg;

	i = 0;
	arg = 0;
	while(str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (ft_isdigit(str[i]) && str[i + 1] == ' ')
			arg++;
		i++;
	}
	if (arg < 1)
		return (1)
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	char **split_arg;

	// si argc == 2 et mais qu'on a qu'un chiffre on return error ? ou on lance le prog quand meme ?
	// gerer cas de duplicate car interdit
	if (argc == 1 && ft_isseveralargs(argv[1]))
	{
		split_arg = ft_split(argv[1]);
		// donc la on a notre tableau d'arg, il faut le gerer comme si on avait nos several argv
		// il faut gerer le cas ou on a que un arg au final car split peut nous ressortir un tableau
		// avec une seule case du coup ?
		// --> SOLUTION on verifie ce quil y a dedans, si ya des chiffres et des espaces on envoie a split
		// skip les espaces de debut comme pour atoi
	}
	if (argc > 1)
	{
		i = 0;
		while (argv[i])
		{
			//first --> checker si tous les arg sont dans argv[1] ou pas
			// pour ca :
			argv[i] = ft_atoi(argv[i]); //on a un chiffre clean

		}
	}
	return (0);
}
