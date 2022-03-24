/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 10:56:13 by noalexan          #+#    #+#             */
/*   Updated: 2022/02/14 16:03:51 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define N 9
#define P 9

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (nb == 0 && power == 0)
		return (1);
	else
		power--;
	return (nb * ft_recursive_power(nb, power));
}

/* ========================================================

#include <stdio.h>

int	main()
{
	printf("%d,%d", N, ft_recursive_power(N, P));
	return (0);
}

======================================================== */