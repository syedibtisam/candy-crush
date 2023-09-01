/*
 * Square.h
 *
 *  Created on: May 10, 2020
 *      Author: boco_x
 */

#ifndef SQUARE_H_
#define SQUARE_H_

#include "Shape.h"

class Square: public Shape {
public:
	Square();
	void DrawShape(int,int,int=0);
	virtual ~Square();
};

#endif /* SQUARE_H_ */
