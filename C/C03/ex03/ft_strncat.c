/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:05:03 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/25 20:22:56 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (dest && src)
	{
		while (dest[i] != '\0')
			i++;
		while (src[j] != '\0' && j < nb)
		{
			dest[i] = src[j];
			j++;
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
/*
#include<stdio.h>
#include<string.h>

int main()
{
    char dest[30] = "i";
    char src[30] = "";
    
    char *t = ft_strncat(dest, src, 11);
    printf("%s\n", t);
    
    char desti[30] = "i";
    char srci[30] = "";
    char *s = strncat(desti, srci, 11);
    printf("%s\n", s);
    
    return 0;
}
*/
