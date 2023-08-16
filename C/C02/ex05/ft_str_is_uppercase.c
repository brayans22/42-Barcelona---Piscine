/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:26:37 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/11 18:26:41 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define A_UPPERCASE_ASCII 65
#define Z_UPPERCASE_ASCII 90

int	ft_str_is_uppercase(char *str)
{
	int	contain_str;
	int	i;

	contain_str = 1;
	i = 0;
	while (contain_str == 1 && str[i] != '\0')
	{
		if (str[i] < A_UPPERCASE_ASCII || str[i] > Z_UPPERCASE_ASCII)
			contain_str = 0;
		i++;
	}
	return (contain_str);
}
