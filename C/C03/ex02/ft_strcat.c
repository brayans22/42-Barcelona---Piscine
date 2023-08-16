/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:38:30 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/25 20:22:17 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (dest && src)
	{
		while (dest[i] != '\0')
			i++;
		while (src[j] != '\0')
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

    char *t = ft_strcat(dest, src);
    printf("%s\n", t);

    char desti[30] = "i";
    char srci[30] = "";
    char *s = strcat(desti, srci);
    printf("%s\n", s);

    return 0;
}
*/
