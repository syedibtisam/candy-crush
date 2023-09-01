/*
 * Candy.h
 *
 *  Created on: May 10, 2020
 *      Author: boco_x
 */

#ifndef CANDY_H_
#define CANDY_H_

#include "Shape.h"

class Candy: public Shape {
public:
	Candy();
	void DrawShape(int,int,int=0);
	virtual ~Candy();
};

#endif /* CANDY_H_ */
