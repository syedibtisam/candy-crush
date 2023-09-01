/*
 * Shape.cpp
 *
 *  Created on: May 9, 2020
 *      Author: boco_x
 */

#include "Shape.h"
#include<iostream>
#include<string>
using namespace std;
Shape::Shape(){
	// TODO Auto-generated constructor stub
	name="Shape";
	for(int i=0;i<3;i++){
		this->x_axis[i]=0;
		this->y_axis[i]=0;
	}
	color=0;
	id=0;
	swap=0;
}
Shape::Shape(string n,int c){
	name=n;
	for(int i=0;i<3;i++){
		this->x_axis[i]=0;
		this->y_axis[i]=0;
	}
	color=c;
	id=0;
	swap=0;
}
void Shape::set_swap(int s){
	swap=s;
}
int Shape::get_swap()const{
	return swap;
}
void Shape::set_name(string s){
	name=s;
}
string Shape::get_name(){
	return name;
}
void Shape::set_draw_axis(int xx,int yy){
	this->x_axis[0]=xx;
	this->y_axis[0]=yy;
}
int Shape::get_draw_x_axis()const{
	return this->x_axis[0];
}
int Shape::get_draw_y_axis()const{
	return this->y_axis[0];
}
void Shape::set_shape_area(int x1,int x2,int y1,int y2){
	this->x_axis[1]=x1;
	this->y_axis[1]=y1;
	this->x_axis[2]=x2;
	this->y_axis[2]=y2;
}
int Shape::get_starting_x_axis()const{
	return this->x_axis[1];
}
int Shape::get_ending_x_axis()const{
	return this->x_axis[2];
}
int Shape::get_starting_y_axis()const{
	return this->y_axis[1];
}
int Shape::get_ending_y_axis()const{
	return this->y_axis[2];
}
void Shape::set_color(int i){
	color=i;
}
int Shape::get_color()const{
	return color;
}
void Shape::set_id(int i){
	id=i;
}
int Shape::get_id()const{
	return id;
}
Shape::~Shape(){

}
