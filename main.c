/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 21:28:08 by lwang             #+#    #+#             */
/*   Updated: 2017/05/03 21:28:11 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int main(int argc, char **argv, char **env)
{
	t_minfo		info;

	(void)argc;
	get_info(argv, env, info);
	minishell(argv, &info);
	return (0);
}
