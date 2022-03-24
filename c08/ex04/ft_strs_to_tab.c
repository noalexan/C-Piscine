/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:26:02 by noalexan          #+#    #+#             */
/*   Updated: 2022/02/16 14:11:40 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/* ===================================

typedef struct	s_stock_str
{
	int size;
	char *str;
	char *copy;
}				t_stock_str;

=================================== */

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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tableau;

	tableau = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (tableau == NULL)
		return (NULL);
	i = 0;
	while (av[i] && i < ac)
	{
		tableau[i].size = ft_strlen(av[i]);
		tableau[i].str = av[i];
		tableau[i].copy = ft_strdup(av[i]);
		i++;
	}
	tableau[i].str = 0;
	return (tableau);
}

/* =========================================================

int	main(int argc, char **argv)
{
	struct s_stock_str *tableau;
	int	i;

	tableau = ft_strs_to_tab(argc, argv);
	i = -1;
	while (++i < argc)
		printf("Tableau -> %d :\n\tSize : %d,\n\tStr : %s,
			\n\tCpy : %s\n\n", i, tableau[i].size, tableau[i].str, tableau[i].copy);
	return (0);
}

========================================================= */