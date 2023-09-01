/*
 * Circle.h
 *
 *  Created on: May 10, 2020
 *      Author: boco_x
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

class Circle: public Shape {
public:
	Circle();
	void DrawShape(int,int,int=0);
	virtual ~Circle();
};

#endif /* CIRCLE_H_ */
