/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:24:43 by mmakboub          #+#    #+#             */
/*   Updated: 2022/03/20 19:26:02 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <unistd.h>
# include <stdio.h>
# include <signal.h>

void	ft_putstr(char *str);
void	ft_putnbr(int n);
void	ft_putchar(char c);
int		ft_atoi(const char *str);
void	send_msg(char msg, int pid);
void	handler_sigusr(int sig, siginfo_t *info, void *unuseful);
void	init_by_zero(void);
typedef struct s_none
{
	int		i;
	char	caract;
}t_none;

#endif
