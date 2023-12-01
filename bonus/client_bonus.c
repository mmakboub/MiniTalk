/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:04:53 by mmakboub          #+#    #+#             */
/*   Updated: 2022/03/20 19:30:52 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalkbonus.h"

void	send_msg(char msg, int pid)
{
	int	bitshift;

	bitshift = 0;
	while (bitshift < 8)
	{
		if ((msg & (128 >> bitshift)) != 0)
			kill (pid, SIGUSR2);
		else
			kill (pid, SIGUSR1);
		bitshift++;
		usleep (500);
	}
}

void	handler(int signum)
{
	if (signum == SIGUSR1)
		ft_putstr ("message well received\n");
}

int	main(int argc, char *argv[])
{
	int		pid;
	char	*str;
	int		i;

	if (argc == 3)
	{
		str = argv[2];
		pid = ft_atoi(argv[1]);
		if (pid > 0)
		{
			i = 0;
			signal(SIGUSR1, &handler);
			while (str[i])
			{
				send_msg (str[i], pid);
				i++;
			}
			send_msg ('\0', pid);
		}
		else
			ft_putstr ("client : pid is incorrect\n");
	}
	else
		ft_putstr ("client: invalid arguments\n");
	return (0);
}
