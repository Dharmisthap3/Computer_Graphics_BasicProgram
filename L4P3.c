#include <graphics.h>
#include <conio.h>
#include <math.h>

// Bresenham's line drawing function
void bresenhamLine(int x1, int y1, int x2, int y2) {
    int dx = abs(x2 - x1), dy = abs(y2 - y1);
    int sx = (x1 < x2) ? 1 : -1;
    int sy = (y1 < y2) ? 1 : -1; 
    int err = dx - dy;

    while (true) {
        putpixel(x1, y1, WHITE);

        if (x1 == x2 && y1 == y2) break;
        int e2 = 2 * err;
        if (e2 > -dy) { 
            err -= dy;
            x1 += sx;
        }
        if (e2 < dx) { 
            err += dx;
            y1 += sy;
        }
    }
}

// Function to draw a diamond
void drawDiamond(int centerX, int centerY, int size) {
    int halfSize = size / 2;

    // Calculate vertices of the diamond
    int x1 = centerX;
    int y1 = centerY - halfSize;
    int x2 = centerX + halfSize;
    int y2 = centerY;
    int x3 = centerX;
    int y3 = centerY + halfSize;
    int x4 = centerX - halfSize;
    int y4 = centerY;

    // Draw four sides of the diamond using Bresenham's algorithm
    bresenhamLine(x1, y1, x2, y2);
    bresenhamLine(x2, y2, x3, y3);
    bresenhamLine(x3, y3, x4, y4);
    bresenhamLine(x4, y4, x1, y1);
}

int main() {
    // Initialize graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    // Draw a diamond
    int centerX = getmaxx() / 2;
    int centerY = getmaxy() / 2;
    int size = 200;
    drawDiamond(centerX, centerY, size);

    // Wait for a key press
    getch();

    // Close the graphics mode
    closegraph();
    
    return 0;
}
