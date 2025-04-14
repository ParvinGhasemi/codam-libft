/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/13 13:03:03 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/13 13:38:17 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_num(unsigned int num, int fd)
{
	if (num >= 10)
		print_num(num / 10, fd);
	ft_putchar_fd("0123456789"[num % 10], fd);
}

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	num;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	num = (unsigned int) nb;
	print_num(num, fd);
}

// or we could also say:
// if (num >= 10)
// 	ft_putnbr_fd(nbr / 10, fd);
// ft_putchar_fd((char)(num % 10 + '0'), fd);
