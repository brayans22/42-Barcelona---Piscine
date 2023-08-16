/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 19:20:47 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/23 23:18:19 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "rush02.h"

void	ft_putstr(char *str);

int	get_decimal(int number)
{
	if (number >= 90)
		return (90);
	else if (number >= 80)
		return (80);
	else if (number >= 70)
		return (70);
	else if (number >= 60)
		return (60);
	else if (number >= 50)
		return (50);
	else if (number >= 40)
		return (40);
	else if (number >= 30)
		return (30);
	else if (number >= 20)
		return (20);
	else if (number <= 20)
		return (number);
	return (0);
}

int	get_multiple(int number)
{
	if (number >= 1000000000)
		return (1000000000);
	else if (number >= 1000000)
		return (1000000);
	else if (number >= 1000)
		return (1000);
	else if (number >= 100)
		return (100);
	return (get_decimal(number));
}

void	print_value(int n, t_dict *dict, int *first)
{
	int				i;
	int				multiple;

	i = 0;
	multiple = get_multiple(n);
	if (multiple >= 100)
		print_value(n / multiple, dict, first);
	if (*first == 0)
		write(1, " ", 1);
	*first = 0;
	while (dict[i].key != multiple)
		i++;
	ft_putstr(dict[i].value);
	if (multiple != 0 && n % multiple != 0)
		print_value(n % multiple, dict, first);
}
