/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msennane <msennane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 03:05:55 by msennane          #+#    #+#             */
/*   Updated: 2023/11/08 03:05:58 by msennane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_of_digits(int n);
static char	*fill_string(char *result, long num, int len, int n);

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	long	num;

	num = n;
	len = number_of_digits(n);
	if (n < 0)
		num = num * -1;
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n == 0)
	{
		result[0] = '0';
	}
	else
	{
		result = fill_string(result, num, len, n);
	}
	return (result);
}

static char	*fill_string(char *result, long num, int len, int n)
{
	while (num > 0)
	{
		result[len - 1] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}

static int	number_of_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		count++;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
