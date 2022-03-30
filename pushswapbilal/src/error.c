int	check_error(char **argv)
(
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[i])
	{
		while (argv[j])
		{
			if (i != j && argv[i] == argv[j])
			{
				ft_printf("error : duplicated number");
				return (1);
			}
			j++;
		}
		if (ft_isdigit(argv[i]))
		{
			ft_printf("error : is not a number")
			return (1);
		}
		i++;
	}
	return (0);
)
