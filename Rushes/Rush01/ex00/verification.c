/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verification.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kluna-bo <kluna-bo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 10:08:10 by kluna-bo          #+#    #+#             */
/*   Updated: 2023/07/16 21:43:36 by kluna-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*put_num_one(int one, int two);
int	*put_num_two(int one, int two);

int	check_row_col(char **mat)
{
	int	count;

	count = 0;
	while (count < 4)
	{
		if (mat[count][0] == mat[count][1] || mat[count][0] == mat[count][2]
			|| mat[count][0] == mat[count][3] || mat[count][1] == mat[count][2]
			|| mat[count][1] == mat[count][3] || mat[count][2] == mat[count][3])
			return (0);
		if (mat[0][count] == mat[1][count] || mat[0][count] == mat[2][count]
			|| mat[0][count] == mat[3][count] || mat[1][count] == mat[2][count]
			|| mat[1][count] == mat[3][count] || mat[2][count] == mat[3][count])
			return (0);
		count++;
	}
	return (1);
}

int	*nums(int one, int two)
{
	if (one == 1 || two == 1)
		return (put_num_one(one, two));
	else
		return (put_num_two(one, two));
}

int	*put_num_one(int one, int two)
{
	int	one_two[2];
	int	one_three[3];
	int	one_four[1];
	int	*p_num;

	one_two[0] = 4123;
	one_two[1] = 4213;
	one_three[0] = 4231;
	one_three[1] = 4132;
	one_three[2] = 4312;
	one_four[0] = 4321;
	if ((one == 1 && two == 2) || (one == 2 && two == 1))
		p_num = one_two;
	else if ((one == 1 && two == 3) || (one == 3 && two == 3))
		p_num = one_three;
	else
		p_num = one_four;
	return (p_num);
}

int	*put_num_two(int one, int two)
{
	int	two_two[6];
	int	two_three[6];
	int	*p_num;

	two_two[0] = 2143;
	two_two[1] = 3241;
	two_two[2] = 2413;
	two_two[3] = 1423;
	two_two[4] = 3412;
	two_two[5] = 3142;
	two_three[0] = 1432;
	two_three[1] = 2431;
	two_three[2] = 3421;
	if (one == 2 && two == 2)
		p_num = two_two;
	if ((one == 2 && two == 3) || (one == 3 && two == 2))
		p_num = two_three;
	return (p_num);
}
