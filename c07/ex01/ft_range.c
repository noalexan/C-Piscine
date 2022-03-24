/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 09:39:27 by noalexan          #+#    #+#             */
/*   Updated: 2022/02/09 11:08:14 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*values;

	i = 0;
	if (min >= max)
		return (NULL);
	values = malloc((max - min) * sizeof (int));
	while (min < max)
	{
		values[i] = min;
		min++;
		i++;
	}
	return (values);
}

/* ========================================================

int	main()
{
	int max = 20;
	int min = 10;
	int *result = ft_range(min, max);
	int	i = 0;
	printf("==============================================\n");
	printf("Variable entre %d et %d\nResult : ", min, max);
	while (i < max - min)
	{
		printf("%d, ", result[i]);
		i++;
	}
	printf("\n==============================================\n");
	return (0);
}

 ======================================================== */
