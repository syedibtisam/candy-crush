#include "Shape.h"
#include "MainGame.h"
#include<iostream>
#include<string>
#include<cstdlib>
#include<time.h>
using namespace std;
int main(){
	/*MainGame g;
	g.make_candies();
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			cout<<g.get_at_x_y(i,j)<<" ";
		}
		cout<<endl;
	}*/
	for(int i=200;i<800;i+=100){
		for(int j=130;j<740;j+=100){
			cout<<i<<","<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
