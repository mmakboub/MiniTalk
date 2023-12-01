/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalkbonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:07:04 by mmakboub          #+#    #+#             */
/*   Updated: 2022/03/20 18:54:43 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALKBONUS_H
# define MINITALKBONUS_H
# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <signal.h>
# include <stdlib.h>

void	ft_putstr(char *str);
void	ft_putnbr(int n);
void	ft_putchar(char c);
int		ft_atoi(const char *str);
void	send_msg(char msg, int pid);
void	handler_sigusr(int sig, siginfo_t *info, void *unuseful);
void	init_by_zero(void);
void	handler(int signum);

typedef struct s_none
{
	int		i;
	char	caract;
}			t_none;

#endif
