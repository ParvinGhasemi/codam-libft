/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/17 23:41:30 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/17 23:41:40 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	is_lower;

	i = 0;
	is_lower = 1;
	while (str[i])
	{
		if (ft_islower(str[i]) || ft_isspace(str[i]) || ft_isdigit(str[i]))
			i++;
		else
		{
			is_lower = 0;
			return (is_lower);
		}
	}
	return (is_lower);
}
