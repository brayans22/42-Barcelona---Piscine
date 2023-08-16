/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 11:09:47 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/25 20:21:51 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *str1, char *str2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((str1[i] != '\0' || str2[i] != '\0') && (i < n))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		else 
			i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s1[] = "22222222222222222222222222222222222222222222";
	char	s2[] = "22";

	printf("%i\n", ft_strncmp(s1, s2, 2));
	return (0);
}
*/
