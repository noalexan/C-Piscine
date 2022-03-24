/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:09:13 by noalexan          #+#    #+#             */
/*   Updated: 2022/02/17 19:44:33 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	imin;

	imin = min;
	i = 0;
	if (min >= max)
		return ((int) NULL);
	range = malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
	{
		range[i] = &min;
		min++;
		i++;
	}
	if (i == max - imin)
		return (max - imin);
	else
		return (-1);
}

// /* ========================================================

int	main(int argc, char **argv)
{
	int max;
	int min;
	int	*range[1];
	int result;

	if (argc < 3)
		return (0);

	min = atoi(argv[1]);
	max = atoi(argv[2]);

	result = ft_ultimate_range(range, min, max);

	printf("==============================================\n");
	printf("Variables entre %d et %d\n", min, max);
	printf("Result : %d\n", result);
	printf("==============================================\n");
	
	return (0);
}

//  ======================================================== */
