/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Color.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnugroho <rnugroho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 20:26:51 by rnugroho          #+#    #+#             */
/*   Updated: 2018/05/14 21:05:52 by rnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_H
# define COLOR_H
# include <cstdio>

class Color
{
	public:
		Color(int red, int green, int blue);
		Color(int rgb);
		~Color(void);

		void Add(Color color);
		void Sub(Color color);
		void Mult(Color color);

		void toString();

		int red;
		int green;
		int blue;
};

#endif