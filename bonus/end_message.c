/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elounejj <ounejjarmehdi@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 19:47:50 by elounejj          #+#    #+#             */
/*   Updated: 2022/01/15 15:50:57 by elounejj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

char	*raise_error(void)
{
	printf("Error\n");
	exit(1);
	return (NULL);
}

void	you_win(void)
{
	printf("\n\n    YOU WIN !\n\n\n");
	exit(0);
}
