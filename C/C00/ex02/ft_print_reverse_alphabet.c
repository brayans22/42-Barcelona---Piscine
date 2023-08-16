/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:22:14 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/06 20:32:53 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	actual_letter;
	char	first_letter;

	actual_letter = 'z';
	first_letter = 'a';
	while (actual_letter >= first_letter) 
	{
		write(1, &actual_letter, 1);
		actual_letter--;
	}
}
