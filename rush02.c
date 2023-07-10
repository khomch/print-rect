void	ft_putchar(char c);

void	ft_print_line(int x, char startchar, char midchar, char endchar)
{
	int	col;

	col = 0;
	ft_putchar(startchar);
	col++;
	while (col < x - 1)
	{
		ft_putchar(midchar);
		col++;
	}
	if (col < x)
		ft_putchar(endchar);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	row;

	if (x > 0 && y > 0)
	{
		row = 0;
		ft_print_line(x, 'A', 'B', 'A');
		row++;
		while (row < y - 1)
		{
			ft_print_line(x, 'B', ' ', 'B');
			row++;
		}
		if (row < y)
			ft_print_line(x, 'C', 'B', 'C');
	}
}
