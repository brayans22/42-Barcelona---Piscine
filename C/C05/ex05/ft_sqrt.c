/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:22:01 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/27 15:42:01 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	wrapped(int nb, int odd_n, int count_sust)
{
	if (nb > odd_n)
		return (wrapped(nb - odd_n, odd_n + 2, count_sust + 1));
	else if (nb == odd_n)
		return (count_sust + 1);
	return (0);
}

int	ft_sqrt(int nb)
{
	return (wrapped(nb, 1, 0));
}
/*
#include<stdio.h>
int main()
{
    int i = ft_sqrt(-1);
    int j = ft_sqrt(0);
    int k = ft_sqrt(2);
    int l = ft_sqrt(4);
    int m = ft_sqrt(6);
    int n = ft_sqrt(8);
    int o = ft_sqrt(12);
    int p = ft_sqrt(36);
    int q = ft_sqrt(49);
    int r = ft_sqrt(56);
    int s = ft_sqrt(64);
    int t = ft_sqrt(81);
    int u = ft_sqrt(121);
    
    printf("%i %i %i %i %i %i %i %i %i %i %i %i %i", 
	i, j, k, l, m, n, o, p, q, r, s, t, u);
    
    return (0);
}
*/
