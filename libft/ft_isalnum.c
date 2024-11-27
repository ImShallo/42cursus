/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstate <cstate@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:14:04 by cstate            #+#    #+#             */
/*   Updated: 2024/11/19 16:30:40 by cstate           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isadlpha(c));
}

int	main(void)
{
	int a = '1';
	printf("fake -> %d\n", ft_isalnum(a));
	printf("real -> %d\n", isalnum(a));
}