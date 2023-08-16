/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:44:54 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/18 16:31:29 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>

int	ft_str_is_alpha(char *str)
{
	int		contain_str;
	int		i;

	contain_str = 1; 
	i = 0;
	while (contain_str == 1 && str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || 
			(str[i] >= 'A' && str[i] <= 'Z'))
			contain_str = 1;
		else
			contain_str = 0;
		i++;
	}
	return (contain_str);
}
