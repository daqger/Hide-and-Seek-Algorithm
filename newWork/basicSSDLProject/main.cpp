//

#include "SSDL.h"
using namespace std;
void drawBottomWallPiece(int x, int y)
{
	SSDL_RenderDrawLine(x, y, x + 50, y); x += 50;
	SSDL_RenderDrawLine(x, y, x, y + 50); y += 50;
	SSDL_RenderDrawLine(x, y, x + 50, y); x += 50;
	SSDL_RenderDrawLine(x, y, x, y - 50); y -= 50;
}

void drawTopWallPiece(int x, int y)
{
	SSDL_RenderDrawLine(x, y, x + 50, y); x += 50;
	SSDL_RenderDrawLine(x, y, x, y - 50); y -= 50;
	SSDL_RenderDrawLine(x, y, x + 50, y); x += 50;
	SSDL_RenderDrawLine(x, y, x, y + 50); y += 50;
}

struct Point2D
{
	int x_ = 0, y_ = 0;
};

int main(int argc, char** argv)
{
	//window setup
	enum {WINDOW_WIDTH = 640, WINDOW_HEIGHT = 480};
	SSDL_SetWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
	SSDL_SetWindowTitle("Hide and Seek Algorithm Analysis Game");
		
	enum { DISTANCE_TO_TRAVEL = 20 }; //amount seeker moves

	//First section of hiding spots
	drawTopWallPiece(100, 100);
	drawTopWallPiece(200, 100);
	drawTopWallPiece(300, 100);
	drawTopWallPiece(400, 100);
	drawTopWallPiece(500, 100);

	//Second section of hiding spots
	drawBottomWallPiece(100, 300);
	drawBottomWallPiece(200, 300);
	drawBottomWallPiece(300, 300);
	drawBottomWallPiece(400, 300);
	drawBottomWallPiece(500, 300);

	sout << "Click the mouse where you want to hide";
	SSDL_WaitMouse();
	int xLocation = SSDL_GetMouseX();
	int yLocation = SSDL_GetMouseY();	
	
	Point2D player = { xLocation,yLocation };
	SSDL_RenderDrawCircle(player.x_, player.y_, 10);
	
	Point2D seeker = { 25,240 };
	SSDL_RenderFillCircle(seeker.x_, seeker.y_, 10);

	

	SSDL_WaitKey(); //Wait for user to hit a key
	return 0;
}
