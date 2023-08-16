/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:08:27 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/27 15:40:10 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power > 0)
	{
		while (power-- > 0)
			result *= nb; 
	}
	return (result);
}
/*
#include<stdio.h>
int main()
{
    int i = ft_iterative_power(0, 0);
    int j = ft_iterative_power(-2, -2);
    int k = ft_iterative_power(4, 3);
    int l = ft_iterative_power(-2, 3);
    int m = ft_iterative_power(2, 5);
    int n = ft_iterative_power(2, 6);
    int o = ft_iterative_power(2, 7);
    int p = ft_iterative_power(2, 8);
    int q = ft_iterative_power(2, 9);
    int r = ft_iterative_power(5, 0);
    
    printf("%i %i %i %i %i %i %i %i %i %i", i, j, k, l, m, n, o, p, q, r);
    
    return 0;
}
*/
