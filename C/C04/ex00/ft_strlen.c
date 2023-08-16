/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 20:13:14 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/27 11:31:27 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	wrapped(char *str, int count)
{
	if (!str[count])
		return (count);
	return (wrapped (str, count + 1));
}

int	ft_strlen(char *str)
{
	return (wrapped(str, 0));
}
/*
#include <stdio.h>
int	main()
{
	char prueba[] = "hola como estas";
	printf("%i", ft_strlen(prueba));
	return (0);
}
*/
