/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 15:20:02 by rmatos            #+#    #+#             */
/*   Updated: 2017/01/14 17:49:15 by rmatos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr("Usage: ./fractol [man/jul/tree]\n");
		return (1);
	}
	run_fractals(argv);
	return (0);
}
