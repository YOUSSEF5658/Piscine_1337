/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguermec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 12:04:05 by yguermec          #+#    #+#             */
/*   Updated: 2025/09/01 12:04:34 by yguermec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	arr = malloc((size) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
/*int main()
{
	int *arr;
	int i = 0;
	int max = 5;
	int min = 1;
	int size = max - min;
	arr = ft_range(min,max);
	while (i < size)
	{
		printf("%d",arr[i]);
		i++;
	}
}*/
