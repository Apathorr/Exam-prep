/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsmith <rsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 11:57:47 by rsmith            #+#    #+#             */
/*   Updated: 2018/11/11 12:37:05 by rsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			if(argv[1][i] >= 'a' && argv[1][i] <= 'y')
					ft_putchar(argv[1][i] + 1);
			else if( argv[1][i] == 'z')
					write(1, "a", 1);
			else if(argv[1][i] >= 'A' && argv[1][i] <= 'Y')
				ft_putchar(argv[1][i] + 1);
			else if(argv[1][i] == 'Z')
				write(1, "A", 1);
			else
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
}
