/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < mcheng@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 11:54:04 by mcheng            #+#    #+#             */
/*   Updated: 2022/09/08 13:20:05 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*array;
	int	i;

	i = 0;
	range = max - min;
	array = (int *)malloc(sizeof(array) * range);
	if (!array)
		return (0);
	else if (min >= max)
		return (0);
	else if (array == NULL)
		return (0);
	while (i < range)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i;
	int	size;

	i = 0;
	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
