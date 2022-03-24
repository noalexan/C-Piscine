/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:07:25 by noalexan          #+#    #+#             */
/*   Updated: 2022/02/14 16:10:24 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

#define N 2147483647

int	ft_sqrt(int nb)
{
	int	sqr;
	int	stop;

	sqr = 0;
	stop = 0;
	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	stop = nb / 2 + 1;
	if (stop > 51)
		stop = nb * 0.1 + 1;
	while (sqr < stop)
	{
		if (nb == sqr * sqr)
			return (sqr);
		sqr++;
	}
	return (0);
}

/* ===================================================

int	main(void)
{
	printf("%d\n", ft_sqrt(N));
	return (0);
}

=================================================== */