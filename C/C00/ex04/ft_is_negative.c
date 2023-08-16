/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:34:49 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/06 20:34:58 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define NEGATIVE_NUMBER 'N'
#define POSITIVE_NUMBER 'P'

void	ft_is_negative(int n)
{
	char	result;

	result = POSITIVE_NUMBER;
	if (n < 0)
	{
		result = NEGATIVE_NUMBER;
	}
	write(1, &result, 1);
}
