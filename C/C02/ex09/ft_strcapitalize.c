/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:20:47 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/18 16:58:31 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>
#define UPPERCASE_A_ASCII 65
#define UPPERCASE_Z_ASCII 90

void	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= UPPERCASE_A_ASCII && str[i] <= UPPERCASE_Z_ASCII)
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	former; 
	bool	is_not_number;
	bool	is_not_lower;
	bool	is_not_upper;

	former = str[0];
	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		is_not_lower = (former < 'a' || former > 'z');
		is_not_upper = (former < 'A' || former > 'Z');
		is_not_number = (former < '0' || former > '9');
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((i == 0) || (is_not_upper && is_not_lower && is_not_number))
				str[i] -= 32;
		}
		i++;
		former = str[i - 1];
	}
	return (str);
}
