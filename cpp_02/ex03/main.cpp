/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 12:14:07 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/25 12:14:45 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main()
{
	// Define a triangle with vertices at (0,0), (5,0), (2.5,5)
	Point a(0.0f, 0.0f);
	Point b(5.0f, 0.0f);
	Point c(2.5f, 5.0f);

	// Test points
	Point inside(2.5f, 2.0f);     // Should be inside
	Point outside(0.0f, 5.0f);    // Should be outside
	Point onEdge(0.0f, 0.0f);     // On vertex (should be false)
	Point onLine(2.5f, 0.0f);     // On edge (should be false)

	std::cout << "Triangle vertices: A(0,0), B(5,0), C(2.5,5)" << std::endl;
	std::cout << std::endl;

	std::cout << "Point (2.5, 2.0) is ";
	if (bsp(a, b, c, inside))
		std::cout << "INSIDE";
	else
		std::cout << "OUTSIDE";
	std::cout << " the triangle" << std::endl;

	std::cout << "Point (0.0, 5.0) is ";
	if (bsp(a, b, c, outside))
		std::cout << "INSIDE";
	else
		std::cout << "OUTSIDE";
	std::cout << " the triangle" << std::endl;

	std::cout << "Point (0.0, 0.0) is ";
	if (bsp(a, b, c, onEdge))
		std::cout << "INSIDE";
	else
		std::cout << "OUTSIDE";
	std::cout << " the triangle (vertex)" << std::endl;

	std::cout << "Point (2.5, 0.0) is ";
	if (bsp(a, b, c, onLine))
		std::cout << "INSIDE";
	else
		std::cout << "OUTSIDE";
	std::cout << " the triangle (on edge)" << std::endl;

	return 0;
}
