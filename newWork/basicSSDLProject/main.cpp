//

#include "SSDL.h"
using namespace std;
void drawWallPiece(int x, int y)
{
	SSDL_RenderDrawLine(x, y, x + 50, y); x += 50;
	SSDL_RenderDrawLine(x, y, x, y + 50); y += 50;
	SSDL_RenderDrawLine(x, y, x + 50, y); x += 50;
	SSDL_RenderDrawLine(x, y, x, y - 50); y -= 50;
}

int main(int argc, char** argv)
{
	//window setup
	SSDL_SetWindowSize(640, 480);
	SSDL_SetWindowTitle("Hide and Seek Algorithm Analysis Game");

	//First line starting from left
	SSDL_RenderDrawLine(100, 50, 300, 50);

	//Second line starting from left
	drawWallPiece(100, 300);
	drawWallPiece(200, 300);
	drawWallPiece(300, 300);
	drawWallPiece(400, 300);

	SSDL_WaitKey(); //Wait for user to hit a key
	return 0;
}