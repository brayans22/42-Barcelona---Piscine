/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:57:29 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/27 15:41:06 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	if (index > 2)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (0);
}
/*
#include<stdio.h>
int main()
{
    int i = ft_fibonacci(-1);
    int j = ft_fibonacci(0);
    int k = ft_fibonacci(1);
    int l = ft_fibonacci(2);
    int m = ft_fibonacci(3);
    int n = ft_fibonacci(4);
    int o = ft_fibonacci(5);
    int p = ft_fibonacci(6);
    int q = ft_fibonacci(8);
    int r = ft_fibonacci(-8);
    
    printf("%i %i %i %i %i %i %i %i %i %i",
	   i, j, k, l, m, n, o, p, q, r);
    
    return 0;
}
*/
