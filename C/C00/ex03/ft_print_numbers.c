/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:33:48 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/06 20:34:01 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	actual_digit;
	char	last_digit;

	actual_digit = '0';
	last_digit = '9';
	while (actual_digit <= last_digit) 
	{
		write(1, &actual_digit, 1);
		actual_digit++;
	}
}
