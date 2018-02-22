#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h> 
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>


using namespace std;

class Block{
	private:
		int x;
		int y;
		int w;
		int h;
		int lives;
	public:
		void SetPosition(int t_x,int t_y);//set position. -1 to not change it
		void SetSize(int t_w,int t_h);//set size. -1 to not change it
		void SetLives(int t_lives);//set lives. -1 to not change it
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


class BlockRow{
private:
	vector<Block> BlockVector(0);
	int Lives;
	int NumOfCol;
	int Width;
	int Height;
	int yPos;
public:
	BlockRow();
	void DownRow();
	void DeleteBlock(int PositionInVector);
};

BlockRow::BlockRow(){
	Block NewBlock;//block that will be added
	NewBlock.SetSize(Width,Height);
	NewBlock.SetLives(Lives);
	bool WillBeAdded;
	
	
	for(int i=0;i<NumOfCol;i++){
		srand(time(NULL));
		WillBeAdded=rand() % 2;
		if(WillBeAdded){
			NewBlock.SetPosition(i*(Widht/NumOfCol),yPos);
			BlockVector.push_back(NewBlock);
		}
	}
	
	if(BlockVector.empty()){
		srand(time(NULL));
		int RandomNumber=rand()% NumOfCol;
		NewBlock.SetPosition(RandomNumber*(Width/NumOfCol),yPos);
	}
}
void BlockRow::DownRow(){
	yPos=yPos-Height;
	for(int i=0;i<BlockVector.size();i++){
		(BlockVector[i]).SetPosition(-1,yPos);
	}
}

void BlockRow::DeleteBlock(int PositionInVector){
	
	
	
}
