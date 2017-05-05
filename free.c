/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 10:08:48 by lwang             #+#    #+#             */
/*   Updated: 2017/05/05 10:08:50 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	deep_free(char **dst)
{
	int i;

	i = 0;
	while (dst[i])
	{
		free(dst[i]);
		i++;
	}
	free(dst);
}