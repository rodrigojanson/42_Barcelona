/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojanson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:41:43 by rojanson          #+#    #+#             */
/*   Updated: 2025/01/06 16:42:04 by rojanson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb >= 0 && nb <= 12)
	{
		while (nb > 0)
		{
			res *= nb;
			nb -= 1;
		}
		return (res);
	}
	else
		return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	check;

	check = ft_interactive_factorial(atoi(argv[1]));
	printf("%i", check);
}
*/
