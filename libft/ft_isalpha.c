/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkazanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 18:11:35 by dkazanov          #+#    #+#             */
/*   Updated: 2016/12/18 18:11:39 by dkazanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int chr)
{
	return ((chr >= 'a' && chr <= 'z') || (chr >= 'A' && chr <= 'Z'));
}
