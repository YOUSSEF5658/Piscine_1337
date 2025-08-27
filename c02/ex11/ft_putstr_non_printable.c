/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguermec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 20:58:48 by yguermec          #+#    #+#             */
/*   Updated: 2025/08/24 23:42:13 by yguermec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hex(unsigned char c)
{
	char	*h;

	h = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &h[c / 16], 1);
	write(1, &h[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] < 127))
		{
			ft_hex((unsigned char) str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
