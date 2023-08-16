/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:29:42 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/11 20:04:57 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SPACE_ASCII 32
#define GUION_ASCII 126

int	ft_str_is_printable(char *str)
{
	int	contain_str;
	int	i;

	contain_str = 1;
	i = 0;
	while (contain_str == 1 && str[i] != '\0')
	{
		if (str[i] < SPACE_ASCII || str[i] > GUION_ASCII)
			contain_str = 0;
		i++;
	}
	return (contain_str);
}
