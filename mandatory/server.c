/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:33:58 by mmakboub          #+#    #+#             */
/*   Updated: 2022/03/20 19:27:36 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"minitalk.h"

t_none	g_none;

void	init_by_zero(void)
{
	g_none.caract = 0;
	g_none.i = 0;
}

void	handler_sigusr(int sig, siginfo_t *info, void *unuseful)
{
	int static	last;

	(void) unuseful;
	sig = sig - SIGUSR1;
	if (last != info->si_pid)
		init_by_zero();
	g_none.caract = g_none.caract << 1 | sig;
	g_none.i++;
	if (g_none.i == 8)
	{
		write(1, &g_none.caract, 1);
		init_by_zero();
	}
	last = info->si_pid;
}

int	main(void)
{
	struct sigaction	minitalk;

	minitalk.sa_sigaction = &handler_sigusr;
	minitalk.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &minitalk, NULL);
	sigaction(SIGUSR2, &minitalk, NULL);
	ft_putstr("PID : ");
	ft_putnbr(getpid());
	ft_putchar('\n');
	while (1)
		pause();
}
