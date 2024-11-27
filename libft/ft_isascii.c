/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:03:10 by cstate            #+#    #+#             */
/*   Updated: 2024/11/18 17:15:25 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	<<ft_isascii> returns non-zero if the when [c] is an ASCII character, zero otherwise
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}