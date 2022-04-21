/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:36:27 by tapulask          #+#    #+#             */
/*   Updated: 2022/04/21 19:25:10 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int main(int argc, char **argv)
{
	t_data	data;
	
	if (argv == 5 || argv == 6)
	{
		ft_record(argv, &data);
		printf("HERE");
	}
	//the rest of the project
	return (0);
}