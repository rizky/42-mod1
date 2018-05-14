/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mod1.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnugroho <rnugroho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 20:04:07 by rnugroho          #+#    #+#             */
/*   Updated: 2018/05/14 22:00:02 by rnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mod1.hpp"
#include "GL/glew.h"

int
	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	Color *color = new Color(255 << 8);
	ft_printf("%s", color->toString());
	delete color;
	return (0);
}
	