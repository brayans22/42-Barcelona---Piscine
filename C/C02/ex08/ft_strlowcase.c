/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:46:56 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/17 14:05:13 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define UPPERCASE_A_ASCII 65
#define UPPERCASE_Z_ASCII 90

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= UPPERCASE_A_ASCII && str[i] <= UPPERCASE_Z_ASCII)
			str[i] += 32;
		i++;
	}
	return (str);
}
