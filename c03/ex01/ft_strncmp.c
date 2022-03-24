/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:56:32 by noalexan          #+#    #+#             */
/*   Updated: 2022/02/13 12:23:09 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i + 1 < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] != s2[i] && n >= i)
		return (s1[i] - s2[i]);
	return (0);
}

/* ==================================

#include <stdio.h>
#include <string.h>

int main()
{
	printf("strncmp    : %d\n", strncmp("ac", "ac", 2));
	printf("ft_strncmp : %d\n", ft_strncmp("ac", "ac", 2));
	return 0;
}

 ================================= */
