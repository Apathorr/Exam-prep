/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsmith <rsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:19:54 by rsmith            #+#    #+#             */
/*   Updated: 2018/11/11 12:37:01 by rsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		count(char c)
{
	int repeat;

	repeat = 1;
	if (c >= 'A' && c <= 'Z')
		repeat = (c - 'A' + 1);
	else if (c >= 'a' && c <= 'z')
		repeat = (c - 'a' + 1);
	return (repeat);
}

int		main(int argc, char **argv)
{
	int	repeat;

	if (argc == 2)
	{
		while (*argv[1])
		{
			repeat = count(*argv[1]);
			while (repeat--)
				write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
}
