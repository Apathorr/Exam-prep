/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsmith <rsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:20:03 by rsmith            #+#    #+#             */
/*   Updated: 2018/11/11 12:39:13 by rsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int t;

	t = 0;
	if (!(argc == 2))
	{
		write(1, "a", 1);
	}
	else
	{
		while (*argv[1])
		{
			if (*argv[1] == 'a')
				t++;
			argv[1]++;
		}
	}
	if (t > 0)
		write(1, "a", 1);
	write(1, "\n", 1);
	return (0);
}
