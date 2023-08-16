/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:43:47 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/27 18:26:38 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_len(char *str, unsigned int i)
{
	if (str[i] == '\0')
		return (i);
	return (ft_len(str, i + 1));
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_dest;
	unsigned int	len_src;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	len_dest = i;
	len_src = ft_len(src, 0);
	if (size == 0 || size <= len_dest)
		return (len_src + size);
	while (src[j] != '\0' && i < (size - len_dest - 1))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (len_src + len_dest);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char dest[400] = "mario lopez";
	char src[400] = "hola mi genteeee";
	
	unsigned int i = ft_strlcat(dest, src, 6);
	printf("%s\n", dest);
	printf("%i\n", i);
	
	char desti[400] = "mario lopez";
	char srci[400] = "hola mi genteeee";
	
	unsigned int j = strlcat(desti, srci, 6);
	printf("%s\n", desti);
	printf("%i\n", j);
	return (0);
}
*/
