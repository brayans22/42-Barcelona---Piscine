/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:48:42 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/27 15:39:50 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return (1);
}
/*
#include<stdio.h>
int main()
{
    int i = ft_recursive_factorial(0);
    int j = ft_recursive_factorial(1);
    int k = ft_recursive_factorial(2);
    int l = ft_recursive_factorial(3);
    int m = ft_recursive_factorial(4);
    int n = ft_recursive_factorial(5);
    int o = ft_recursive_factorial(6);
    int p = ft_recursive_factorial(7);
    int q = ft_recursive_factorial(15);
    int r = ft_recursive_factorial(-20);
    
    printf("%i %i %i %i %i %i %i %i %i %i", i, j, k, l, m, n, o, p, q, r);
    
    return 0;
}
*/
