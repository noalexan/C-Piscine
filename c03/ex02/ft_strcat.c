/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:22:42 by noalexan          #+#    #+#             */
/*   Updated: 2022/02/13 10:48:53 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (dest[i])
		i++;
	while (src[n])
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* =================================

#include <stdio.h>
#include <string.h>

int main()
{
	char a[15] = "Salut";
	char b[15] = "Salut";
	printf("strcat    : %s\n", strcat(a, "Bonsoir"));
	printf("ft_strcat : %s\n", ft_strcat(b, "Bonsoir"));
}

 ================================ */
