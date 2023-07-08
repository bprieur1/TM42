/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:13:51 by event             #+#    #+#             */
/*   Updated: 2023/07/08 12:13:52 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c, int newLine);

void	draw_horizontal(int width)
{
	int	i;

	i = 1;
	if (width == 1)
	{
		ft_putchar('o', 1);
	}
	else if (width >= 2)
	{
		ft_putchar('o', 0);
		while (i < width - 1)
		{
			ft_putchar('-', 0);
			i++;
		}
		ft_putchar('o', 1);
	}
}

void	draw_vertical(int height, int width, int a, int b)
{
	height = height - 2;
	if (height >= 2)
	{
		while (a != height)
		{
			b = 0;
			ft_putchar('|', 0);
			if (width == 1)
			{
				ft_putchar('\n', 0);
			}
			else if (width >= 2)
			{
				while (b != width - 2)
				{
					ft_putchar(' ', 0);
					b++;
				}
				ft_putchar('|', 1);
			}
			a++;
		}
	}
}

void	rush(int x, int y)
{
	draw_horizontal(x);
	draw_vertical(y, x, 0, 0);
	if (y > 1)
	{
		draw_horizontal(x);
	}
}
