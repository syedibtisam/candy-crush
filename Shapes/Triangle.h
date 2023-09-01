/*
 * Triangle.h
 *
 *  Created on: May 10, 2020
 *      Author: boco_x
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "Shape.h"

class Triangle: public Shape {
public:
	Triangle();
	void DrawShape(int,int,int=0);
	virtual ~Triangle();
};

#endif /* TRIANGLE_H_ */
