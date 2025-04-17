/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmohamma <pmohamma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/26 14:59:41 by pmohamma      #+#    #+#                 */
/*   Updated: 2025/04/14 21:04:43 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	is_upper;

	i = 0;
	is_upper = 1;
	while (str[i])
	{
		if (ft_isupper(str[i]) || ft_isspace(str[i]) || ft_isdigit(str[i]))
			i++;
		else
		{
			is_upper = 0;
			return (is_upper);
		}
	}
	return (is_upper);
}
