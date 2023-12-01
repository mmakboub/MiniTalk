/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:24:34 by mmakboub          #+#    #+#             */
/*   Updated: 2022/03/20 19:18:19 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_msg(char msg, int pid)
{
	int		bitshift;

	bitshift = 0;
	while (bitshift < 8)
	{
		if ((msg & (128 >> bitshift)) != 0)
			kill (pid, SIGUSR2);
		else
			kill (pid, SIGUSR1);
		bitshift++;
		usleep (800);
	}
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
			while (str[i])
			{
				send_msg(str[i], pid);
				i++;
			}
		}
		else
			ft_putstr("client : pid is incorrect\n");
	}
	else
		ft_putstr("client: invalid arguments\n");
	return (0);
}
