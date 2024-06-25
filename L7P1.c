#include <graphics.h>
#include <conio.h>
#include <dos.h>

void drawX(int x, int y, int size) {
    // Draw two diagonal lines to form an 'X'
    line(x, y, x + size, y + size);  // Top-left to bottom-right
    line(x, y + size, x + size, y);  // Bottom-left to top-right
}

int main() {
	int x=100,y=100,size=200;  //co and size for the 'X'
    // Initialize graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    // Draw 'X'
    drawX(x, y, size);
    getch();
    closegraph();

    return 0;
}
