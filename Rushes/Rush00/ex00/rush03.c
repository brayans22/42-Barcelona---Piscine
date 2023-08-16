/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kavillar <kavillar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 17:32:21 by kavillar          #+#    #+#             */
/*   Updated: 2023/07/09 17:32:38 by kavillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern	void	ft_putchar(char print);

char	desing_symbol(int x, int y, int max_x, int max_y)
{
	char	ch;

	if ((x == 1 && y == 1) || (x == 1 && y == max_y))
	{
		ch = 'A';
	}
	else if ((x == max_x && y == 1) || (x == max_x && y == max_y))
	{
		ch = 'C';
	}
	else if (y == 1 || y == max_y)
	{
		ch = 'B';
	}
	else if (x == 1 || x == max_x)
	{
		ch = 'B';
	}
	else
	{
		ch = ' ';
	}
	return (ch);
}

void	rush(int max_x, int max_y)
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	while (y <= max_y)
	{
		while (x <= max_x)
		{
			ft_putchar(desing_symbol(x, y, max_x, max_y));
			x++;
		}
		ft_putchar('\n');
		x = 1;
		y++;
	}
}
