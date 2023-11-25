/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msennane <msennane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:09:56 by msennane          #+#    #+#             */
/*   Updated: 2023/11/25 17:13:53 by msennane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	if (s[s_len] == (const char)c)
		return ((char *)(s + s_len));
	while (s_len > 0)
	{
		if (s[s_len] == (const char)c)
			return ((char *)s + s_len);
		s_len--;
	}
}
