/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:44:30 by vferrare          #+#    #+#             */
/*   Updated: 2019/10/10 14:30:54 by vferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int e;

	e = *a;
	*a = *b;
	*b = e;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = i;
		while (j > 0 && tab[j] < tab[j - 1])
		{
			ft_swap(tab + j, tab + j - 1);
			j--;
		}
		i++;
	}
}
