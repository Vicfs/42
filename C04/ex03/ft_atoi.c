/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:49:26 by vferrare          #+#    #+#             */
/*   Updated: 2019/10/18 16:18:15 by vferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int sinal;
	int number;

	sinal = 1;
	i = 0;
	number = 0;
	while
		((str[i] != '\0') && (str[i] == ' ' || str[i] == '\f' ||
		str[i] == '\n' || str[i] == '\r' ||
		str[i] == '\t' || str[i] == '\v'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sinal = sinal * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - 48);
		i++;
	}
	number = number * sinal;
	return (number);
}
