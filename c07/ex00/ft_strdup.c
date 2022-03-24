/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 09:32:35 by noalexan          #+#    #+#             */
/*   Updated: 2022/02/16 07:43:00 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcpy(char *src, char *copy)
{
	int	i;

	i = -1;
	while (src[++i])
		copy[i] = src[i];
	copy[i] = '\0';
	return (copy);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	i = 0;
	while (src[i])
		i++;
	copy = malloc(i * sizeof(char));
	ft_strcpy(src, copy);
	return (copy);
}

/* ========================================================

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		char *test;
		
		test = argv[1];
		printf("==============================================\n");
		printf("Your test variable\t: %s\n", test);
		printf("Result\t\t\t: %s\n", ft_strdup(test));
		printf("Real functions's result\t: %s\n", strdup(test));
		printf("==============================================\n");
	}
	return (0);
}

 ======================================================== */
