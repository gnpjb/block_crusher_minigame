#include<string>
#include<fstream>
#include<iostream>
#include<vector>
#include<SDL2/SDL.h>
#include<SDL2/SDL_ttf.h>

class Block{
	private:
		int x;
		int y;
		int w;
		int h;
		int lives;
	public:
		void SetPosition(int t_x,int t_y);
		void SetSize(int t_w,int t_h);
		void SetLives(int t_lives);
		void GetPosition(int* r_x,int* r_y);//can handle null
		void GetSize(int* r_w,int* r_h);//can handle null
		void GetLives(int* r_lives);//can handle null
};

void Block::SetPosition(int t_x,int t_y){
	if(t_x>=0){
		x=t_x;
	}
	if(t_y>=0){
		y=t_y;
	}
}

void Block::SetSize(int t_w,int t_h){
	if(t_w>=0){
		w=t_w;
	}
	if(t_h>=0){
		h=t_h;
	}	
}
void Block::SetLives(int t_lives){
	if(t_lives>0){
		lives=t_lives
	}
}
void Block::GetPosition(int* r_x,int* r_y){
	if(r_x!=NULL){
		*r_x=x;
	}
	if(r_y!=NULL){
		*r_y=y;
	}
}
void Block::GetSize(int* r_w,int* r_h){
	if(r_w!=NULL){
		*r_w=w;
	}
	if(r_h!=NULL){
		*r_h=h;
	}
	
}
void Block::GetLives(int* r_lives){
	if(r_lives!=NULL){
		*r_lives=lives;
	}
}

