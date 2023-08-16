/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:31:48 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/06 20:31:55 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	actual_letter;
	char	last_letter;

	actual_letter = 'a';
	last_letter = 'z';
	while (actual_letter <= last_letter) 
	{
		write(1, &actual_letter, 1);
		actual_letter++;
	}
}
