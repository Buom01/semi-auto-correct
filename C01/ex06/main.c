/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 14:36:38 by badam             #+#    #+#             */
/*   Updated: 2019/06/09 14:50:49 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.c>

void	ft_strlen(char *str);

int		main(void)
{
	char str[10] = "0123456789";
	char str1[12] = "0123456789ab";
	char str2[0] = "";

	printf("10:");
	ft_strlen(str);
	printf("\n12:");
	ft_strlen(str1);
	printf("\n:");
	ft_strlen(str2);
}
