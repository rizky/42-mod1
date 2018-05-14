/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Color.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnugroho <rnugroho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 20:26:56 by rnugroho          #+#    #+#             */
/*   Updated: 2018/05/14 21:37:55 by rnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Color.hpp"

Color::Color(int red, int green, int blue)
{
	this->red = red;
	this->green = green;
	this->blue = blue;
}

Color::Color(int rgb)
{
	this->red = (rgb >> 16) % 256;
	this->green = (rgb >> 8) % 256;
	this->blue = rgb % 256;
}

char
	*Color::toString(void)
{
	ft_asprintf(&_toString, "Color( red: %3d, green: %3d, blue: %3d )", this->red, this->green, this->blue);
	return (_toString);
}

Color::~Color(void)
{
	free(_toString);
}