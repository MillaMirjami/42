/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khasi <khasi@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 14:49:58 by khasi             #+#    #+#             */
/*   Updated: 2024/07/14 14:50:01 by khasi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_dict
{
	char	number;
	char	*words;
}	t_dict;
void	ft_putstr(char *str);
char	*ft_strdup(char *src);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
#endif
