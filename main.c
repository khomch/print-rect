void	rush(int x, int y);
void	ft_putchar(char c);

int	ft_simple_atoi(char *str)
{
	long	number;
	int		multiplier;

	number = 0;
	multiplier = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			multiplier = -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		number = number * 10 + *str - '0';
		str++;
	}
	return (number * multiplier);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		rush(ft_simple_atoi(argv[1]), ft_simple_atoi(argv[2]));
	return (0);
}
