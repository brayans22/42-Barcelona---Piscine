/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:18:48 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/11 18:22:53 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define A_LOWERCASE_ASCII 97
#define Z_LOWERCASE_ASCII 122

int	ft_str_is_lowercase(char *str)
{
	int	contain_str;
	int	i;

	contain_str = 1;
	i = 0;
	while (contain_str == 1 && str[i] != '\0')
	{
		if (str[i] < A_LOWERCASE_ASCII || str[i] > Z_LOWERCASE_ASCII)
			contain_str = 0;
		i++;
	}
	return (contain_str);
}
