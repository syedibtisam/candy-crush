/*
 * MainGame.cpp
 *
 *  Created on: May 10, 2020
 *      Author: boco_x
 */
#include<iostream>
#include<string>
#include<cstdlib>
#include<time.h>
#include "MainGame.h"
#include "Shape.h"
#include "Candy.h"
#include "Square.h"
#include "Circle.h"
#include "Triangle.h"
#include "RoundedR.h"
using namespace std;
int get_random_in_range(int first,int second){
	int random=time(NULL);
	int n=0;
	srand(random);
	while(true){
		n=rand()%second+1;
		if(n>first-1)
			break;

	}
	return n;
}
MainGame::MainGame() {
	// TODO Auto-generated constructor stub
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			grid[i][j]=0;
		}
	}
}
void MainGame::set_at_x_y(int x,int y,int v){
	grid[x][y]=v;
}
int MainGame::get_at_x_y(int x,int y)const{
	return grid[x][y];
}
void MainGame::make_candies(){
	int combo[3];//combos of 3, 4, and 5 at index 0, 1, and 2 respectively
	combo[0]=get_random_in_range(4,6);//combo of 3
	cout<<combo[0];
	combo[1]=get_random_in_range(2,3);//combo of 4
	cout<<combo[1];
	combo[2]=get_random_in_range(0,1);//combo of 5
	cout<<combo[2];
	cout<<endl;
	for(int i=0;i<7;i++){
		for(int j=0;j<7;j++){
			grid[i][j]=rand()%5;
		}
		cout<<endl;
	}
	draw_candies();
}
void MainGame::draw_candies(){
	static Shape *candies[7][7];
	static bool once=true;
	if(once==true){
		for(int i=0;i<7;i++){
			for(int j=0;j<7;j++){
				if(grid[i][j]==1)
					candies[i][j]=new Square;
				else if(grid[i][j]==2)
					candies[i][j]=new Circle;
				else if(grid[i][j]==3)
					candies[i][j]=new Triangle;
				else if(grid[i][j]==4)
					candies[i][j]=new Candy;
				else
					candies[i][j]=new RoundedR;
			}
		}
		once=false;
	}
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){

		}
	}
}
MainGame::~MainGame() {
	// TODO Auto-generated destructor stub
}
