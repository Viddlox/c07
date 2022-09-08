/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < mcheng@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:49:10 by mcheng            #+#    #+#             */
/*   Updated: 2022/09/08 13:19:42 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
