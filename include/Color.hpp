/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Color.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnugroho <rnugroho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 20:26:51 by rnugroho          #+#    #+#             */
/*   Updated: 2018/05/14 21:19:43 by rnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_H
# include "ft_mod1.hpp"
# define COLOR_H

class Color
{
	public:
		Color(int red, int green, int blue);
		Color(int rgb);
		~Color(void);

		void Add(Color color);
		void Sub(Color color);
		void Mult(Color color);

		char *toString();

		int red;
		int green;
		int blue;
};

#endif