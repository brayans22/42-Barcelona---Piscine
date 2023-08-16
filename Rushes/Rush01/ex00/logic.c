/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kluna-bo <kluna-bo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:45:18 by kluna-bo          #+#    #+#             */
/*   Updated: 2023/07/17 13:14:28 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*nums(int one, int two);

int	sort_input(char *str)
{
	int		count;
	int		count_s;

	count = 0;
	count_s = 0;
	while (str[count] != '\0')
	{
		if (!(str[count] >= '1' && str[count] <= '4') && str[count] != ' ')
			return (0);
		if (str[count] != ' ')
		{
			str[count_s] = str[count];
			count_s++;
		}
		count++;
	}
	str[count_s] = '\0';
	if (count != 31 || count_s != 16)
		return (0);
	if (str[count] == 1 && str[count +4] == 1)
		return (0);
	return (1);
}

void	fill_pos(char **mat, int *nums, char *str, int col)
{
	int	count;
	int	row;
	int	p_num;
	int	flag;

	flag = str[col] < str[col +4];
	p_num = nums[0];
	count = 0;
	row = 0;
	while (row < 4)
	{
		if (flag)
			mat[3 - count][col] += (p_num % 10);
		else
			mat[count][col] += (p_num % 10);
		p_num = ((p_num - p_num % 10) / 10);
		count++;
		row++;
	}
}

int	validate_input(char *str)
{
	int	count;

	count = 0;
	while (count < 12)
	{
		if (((str[count] - '0') + (str[count +4] - '0') >= 6)
			|| (str[count] == '1' && str[count +4] == '1'))
			return (0);
		count++;
	}
	if (count == 4)
		count = 7;
	return (1);
}

void	fill_matrix(char **mat, char *str)
{
	int		count;
	int		col;

	count = 0;
	col = 0;
	while (col < 4)
	{
		fill_pos(mat, nums((str[col]) - 48, (str[col + 4]) - 48),
			str, col);
		col++;
	}
}
