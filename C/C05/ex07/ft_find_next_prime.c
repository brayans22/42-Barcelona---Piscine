/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:27:48 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/27 15:32:01 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb, int number_test)
{
	if ((number_test >= nb) && (nb != 0) && (nb != 1))
		return (1);
	else if ((nb == 0) || (nb == 1))
		return (0);
	else
	{
		if ((nb % number_test) == 0)
			return (0);
		return (is_prime(nb, number_test + 1));
	}
}

int	ft_find_next_prime(int nb)
{
	if (!is_prime(nb, 2))
		return (ft_find_next_prime(nb + 1));
	return (nb);
}
/*
#include<stdio.h>
int main()
{
    int i = ft_find_next_prime(0);
    int j = ft_find_next_prime(1);
    int k = ft_find_next_prime(2);
    int l = ft_find_next_prime(3);
    int m = ft_find_next_prime(4);
    int n = ft_find_next_prime(9);
    int o = ft_find_next_prime(12);
    int p = ft_find_next_prime(19);
    int q = ft_find_next_prime(23);
    int r = ft_find_next_prime(29);
    int s = ft_find_next_prime(31);
    int t = ft_find_next_prime(37);
    int u = ft_find_next_prime(44);
    
    printf("%i %i %i %i %i %i %i %i %i %i %i %i %i", i, j, k, l, m, 
	n, o, p, q, r, s, t, u);
    
    return (0);
}
*/
