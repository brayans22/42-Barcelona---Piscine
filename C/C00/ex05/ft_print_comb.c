/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 09:38:25 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/07 12:22:05 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

#define MAX_UNIT 55
#define MAX_TEN 56
#define MAX_HUNDRED 57

bool	are_different_numbers(char unit, char ten, char hundred)
{
	return (unit != ten && ten != hundred && hundred != unit);
}

void	show_combination(char unit, char ten, char hundred)
{
	write(1, &unit, 1);
	write(1, &ten, 1);
	write(1, &hundred, 1);
	if (unit != MAX_UNIT)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	unit;
	char	ten;
	char	hundred;

	unit = '0';
	ten = '1';
	hundred = '2';
	while (unit <= MAX_UNIT)
	{
		while (ten <= MAX_TEN)
		{
			while (hundred <= MAX_HUNDRED)
			{
				if (are_different_numbers(unit, ten, hundred))
				{
					show_combination(unit, ten, hundred);
				}
				hundred++;
			}
			hundred = ten + 1;
			ten++;
		}
		ten = unit + 1;
		unit++;
	}
}
