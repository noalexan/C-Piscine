/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:45:44 by noalexan          #+#    #+#             */
/*   Updated: 2022/02/15 11:54:53 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = argc;
	while (--j > 0)
	{
		i = -1;
		while (argv[j][++i])
			write(1, &argv[j][i], 1);
		write(1, "\n", 1);
	}
	return (0);
}
