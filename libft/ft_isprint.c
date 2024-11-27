/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:16:52 by cstate            #+#    #+#             */
/*   Updated: 2024/11/25 14:51:23 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	<<ft_isprint>> returns non-zero if [c] 
	is a printable character, zero otherwise
 */
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
