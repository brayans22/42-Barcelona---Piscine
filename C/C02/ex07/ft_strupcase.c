/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:29:23 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/11 19:48:20 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define LOWERCASE_A_ASCII 97
#define LOWERCASE_Z_ASCII 122

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= LOWERCASE_A_ASCII && str[i] <= LOWERCASE_Z_ASCII)
			str[i] -= 32;
		i++;
	}
	return (str);
}
