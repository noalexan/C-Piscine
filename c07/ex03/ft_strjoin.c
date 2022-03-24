/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 09:55:09 by noalexan          #+#    #+#             */
/*   Updated: 2022/02/17 19:37:44 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	intostr(int size, char **strs, char *sep, char *value)
{
	int	i;
	int	t;
	int	j;

	i = -1;
	t = -1;
	while (strs[++i] && i <= size)
	{
		j = -1;
		while (strs[i][++j])
			value[++t] = strs[i][j];
		if (i + 1 < size)
		{
			j = -1;
			while (sep[++j])
				value[++t] = sep[j];
		}
	}
	value[++t] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*value;
	int		t;

	i = -1;
	j = 0;
	t = 0;
	if (size == 0)
		return (0);
	while (strs[++i] && i <= size)
	{
		while (strs[i][j])
			j++;
		t += j;
		j = 0;
	}
	value = malloc(t * sizeof(char));
	intostr(size, strs, sep, value);
	return (value);
}

/* ================================================================

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	printf("%s\n", ft_strjoin(argc, argv, ", "));
	return (0);
}

================================================================ */
