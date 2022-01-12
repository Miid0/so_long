/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elounejj <ounejjarmehdi@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 19:50:10 by elounejj          #+#    #+#             */
/*   Updated: 2022/01/12 13:14:06 by elounejj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_map_caracters(char *characters)
{
	if (!is_found(characters, 'P') || !is_found(characters, 'C') \
									|| !is_found(characters, 'E'))
		return (0);
	return (1);
}

int	check_map_rectangular(char **map)
{
	int		i;
	int		j;

	j = 0;
	i = ft_strlen(map[0]);
	while (map[j] != NULL)
		j++;
	if (i <= j)
		return (0);
	return (1);
}

int	check_wall(char **map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		if (!first_and_last(map[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_map_walls(char **map)
{
	if (!line_all_ones(map[0], '1') \
		|| !line_all_ones(map[tab_length(map) - 1], '1'))
		return (0);
	return (1);
}

int	check_map(char *map)
{
	char	*characters;
	char	**arr;
	int		i;

	i = 0;
	characters = get_map_caracters(map);
	if (!check_map_caracters(characters))
	{
		free(characters);
		raise_error();
	}
	arr = ft_split(characters, '\n');
	if (!check_wall(arr) || !check_map_rectangular(arr) \
		|| !check_map_walls(arr) || !check_length_walls(arr))
	{
		free(characters);
		free_tab(arr);
		raise_error();
	}
	free_tab(arr);
	free(characters);
	return (1);
}
