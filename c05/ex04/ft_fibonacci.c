/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:17:48 by noalexan          #+#    #+#             */
/*   Updated: 2022/02/08 18:28:54 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

#define N 10

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/* ========================================================

int	main()
{
	int result = ft_fibonacci(N);
	printf("==============================================\n");
	printf("Your test variable : %d\n", N);
	printf("Result : %d\n", result);
	printf("==============================================\n");
	return (0);
}

 ======================================================== */
