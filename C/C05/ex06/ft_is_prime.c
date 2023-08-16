/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:36:37 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/27 17:57:10 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	wrapped(int nb, int number_test)
{
	if (number_test >= nb && nb != 0 && nb != 1)
		return (1);
	else if (nb == 0 || nb == 1)
		return (0);
	else
	{
		if (nb % number_test == 0)
			return (0);
		return (wrapped(nb, number_test + 1));
	}
}

int	ft_is_prime(int nb)
{
	return (wrapped(nb, 2));
}
/*
#include<stdio.h>
int main()
{
    int i = ft_is_prime(0);
    int j = ft_is_prime(1);
    int k = ft_is_prime(2);
    int l = ft_is_prime(3);
    int m = ft_is_prime(4);
    int n = ft_is_prime(9);
    int o = ft_is_prime(12);
    int p = ft_is_prime(19);
    int q = ft_is_prime(23);
    int r = ft_is_prime(29);
    int s = ft_is_prime(31);
    int t = ft_is_prime(37);
    int u = ft_is_prime(41);
    
    printf("%i %i %i %i %i %i %i %i %i %i %i %i %i", i, j, k, l, 
	m, n, o, p, q, r, s, t, u);
    
    return (0);
}
*/
