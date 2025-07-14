/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:39:22 by flvejux           #+#    #+#             */
/*   Updated: 2025/07/13 16:37:29 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		getdictsize(char *path);
char	*getrawdict(char *path);
char	**ft_spilt(char *str, char *sep);
int		lineerror(char *str);
int		dicterror(char *path);
int		ft_chknum(char *str);
char	*xpower(int i);
char	*chk_dix(char n1, char n2);

#endif
