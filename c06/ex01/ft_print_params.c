/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:46:45 by noalexan          #+#    #+#             */
/*   Updated: 2022/02/08 19:06:55 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	while (--argc > 0)
	{
		i = -1;
		while (argv[j][++i])
			write(1, &argv[j][i], 1);
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
