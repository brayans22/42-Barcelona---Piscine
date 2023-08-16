/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:17:33 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/17 15:59:53 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define NUMBER_0_ASCII 48
#define NUMBER_9_ASCII 57

int	ft_str_is_numeric(char *str)
{
	int	contain_str;
	int	i;

	contain_str = 1;
	i = 0;
	while (contain_str == 1 && str[i] != '\0')
	{
		if (str[i] < NUMBER_0_ASCII || str[i] > NUMBER_9_ASCII)
			contain_str = 0;
		i++;
	}
	return (contain_str);
}
