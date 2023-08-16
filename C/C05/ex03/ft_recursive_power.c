/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:16:52 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/27 15:40:32 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include<stdio.h>
int main()
{
    int i = ft_recursive_power(0, 0);
    int j = ft_recursive_power(-2, -2);
    int k = ft_recursive_power(4, 3);
    int l = ft_recursive_power(-2, 3);
    int m = ft_recursive_power(2, 5);
    int n = ft_recursive_power(2, 6);
    int o = ft_recursive_power(2, 7);
    int p = ft_recursive_power(2, 8);
    int q = ft_recursive_power(2, 9);
    int r = ft_recursive_power(2, 10);
    
    printf("%i %i %i %i %i %i %i %i %i %i", i, j, k, l, m, n, o, p, q, r);
    
    return 0;
}
*/
