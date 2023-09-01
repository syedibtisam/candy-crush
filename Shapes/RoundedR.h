/*
 * RoundedR.h
 *
 *  Created on: May 10, 2020
 *      Author: boco_x
 */

#ifndef ROUNDEDR_H_
#define ROUNDEDR_H_

#include "Shape.h"

class RoundedR: public Shape {
public:
	RoundedR();
	void DrawShape(int,int,int=0);
	virtual ~RoundedR();
};

#endif /* ROUNDEDR_H_ */
