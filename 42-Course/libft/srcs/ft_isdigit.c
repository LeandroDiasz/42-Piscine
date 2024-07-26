/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 01:06:02 by root              #+#    #+#             */
/*   Updated: 2024/07/14 01:07:16 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_isdigit(int c)
{
    if (c >= 48 && c <= 57)
        return (c);
    return (0);
}