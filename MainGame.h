/*
 * MainGame.h
 *
 *  Created on: May 10, 2020
 *      Author: boco_x
 */

#ifndef MAINGAME_H_
#define MAINGAME_H_

class MainGame {
	int grid[9][9];//game board
public:
	MainGame();
	void set_at_x_y(int,int,int);
	int get_at_x_y(int,int)const;
	void make_candies();
	void draw_candies();
	virtual ~MainGame();
};

#endif /* MAINGAME_H_ */
