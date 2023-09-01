/*
 * Shape.h
 *
 *  Created on: May 9, 2020
 *      Author: boco_x
 */

#ifndef SHAPE_H_
#define SHAPE_H_
#include<iostream>
#include<string>
using namespace std;
class Shape {
protected:
	string name;
	int x_axis[3];
	int y_axis[3];
	int color;
	int id;
	int swap;
public:
	Shape();
	Shape(string,int);
	void set_name(string);
	string get_name();
	void set_swap(int);
	int get_swap()const;
	void set_draw_axis(int,int);
	int get_draw_x_axis()const;
	int get_draw_y_axis()const;
	void set_shape_area(int,int,int,int);
	int get_starting_x_axis()const;
	int get_ending_x_axis()const;
	int get_starting_y_axis()const;
	int get_ending_y_axis()const;
	void set_color(int);
	int get_color()const;
	void set_id(int);
	int get_id()const;
	virtual void DrawShape(int,int,int=0)=0;
	virtual ~Shape();
};

#endif /* SHAPE_H_ */
