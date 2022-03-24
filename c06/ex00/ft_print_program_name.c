/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:42:03 by noalexan          #+#    #+#             */
/*   Updated: 2022/02/08 18:44:33 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	if (argc > 0)
	{
		i = -1;
		while (argv[0][++i])
			write(1, &argv[0][i], 1);
		write(1, "\n", 1);
	}
	return (0);
}
