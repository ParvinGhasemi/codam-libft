/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: parvinm.ghasemi <parvinm.ghasemi@studen      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/13 12:08:32 by parvinm.gha   #+#    #+#                 */
/*   Updated: 2025/04/17 23:44:05 by parvinm.gha   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <string.h>

int		ft_isdigit(int c);
void	ft_putchar_fd(char c, int fd);
void	ft_putchar(char c);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putnbr(int nb);
void	ft_putstr_fd(char const *str, int fd);
void	ft_putstr(char const *str);
int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isalpha(int c);
char	*ft_strstr(char *str, char *to_find);
int		ft_strcmp(char const *s1, char const *s2);
char	*ft_strcpy(char *dest, char const *src);
int		ft_strlen(char *str);
int		ft_isspace(int c);
int		ft_isalnum(int c);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_lowercase(char *str);

#endif
