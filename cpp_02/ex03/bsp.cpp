/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reldahli <reldahli@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 12:10:14 by reldahli          #+#    #+#             */
/*   Updated: 2025/07/25 12:18:58 by reldahli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	// Calculate the area of the triangle ABC using cross product
	// Area = 0.5 * |AB x AC|
	Fixed abx = b.getX() - a.getX();
	Fixed aby = b.getY() - a.getY();
	Fixed acx = c.getX() - a.getX();
	Fixed acy = c.getY() - a.getY();

	Fixed areaABC = Fixed::abs(abx * acy - aby * acx);

	// Calculate areas of triangles PAB, PBC, PCA
	Fixed apx = point.getX() - a.getX();
	Fixed apy = point.getY() - a.getY();
	Fixed areaPAB = Fixed::abs(apx * aby - apy * abx);

	Fixed bpx = point.getX() - b.getX();
	Fixed bpy = point.getY() - b.getY();
	Fixed bcx = c.getX() - b.getX();
	Fixed bcy = c.getY() - b.getY();
	Fixed areaPBC = Fixed::abs(bpx * bcy - bpy * bcx);

	Fixed cpx = point.getX() - c.getX();
	Fixed cpy = point.getY() - c.getY();
	Fixed cax = a.getX() - c.getX();
	Fixed cay = a.getY() - c.getY();
	Fixed areaPCA = Fixed::abs(cpx * cay - cpy * cax);

	// Point is inside the triangle if sum of areas equals triangle area
	// and none of the sub-areas is zero (point not on edge)
	Fixed sumAreas = areaPAB + areaPBC + areaPCA;

	return (sumAreas == areaABC) &&
		(areaPAB > Fixed(0)) &&
		(areaPBC > Fixed(0)) &&
		(areaPCA > Fixed(0));
}
