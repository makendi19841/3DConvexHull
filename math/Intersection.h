#pragma once

#include "..\geom\Point3.h"

class Intersection 
{

public:

	static bool InnerIntersection2DLineSegments(const Point3 &p1, const Point3 &p2, const Point3 &p3, const Point3 &p4)
	{
		double denom = ((p4.y - p3.y)*(p2.x - p1.x)) - ((p4.x - p3.x)*(p2.y - p1.y));
        double nume_a = ((p4.x - p3.x)*(p1.y - p3.y)) - ((p4.y - p3.y)*(p1.x - p3.x));
        double nume_b = ((p2.x - p1.x)*(p1.y - p3.y)) - ((p2.y - p1.y)*(p1.x - p3.x));

		double ua = nume_a / denom;
        double ub = nume_b / denom;

		return ua > 0.0 && ua < 1.0 && ub > 0.0 && ub < 1.0;
	}

};