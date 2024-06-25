#include <stdio.h>
#include <conio.h>
#include <graphics.h>

// Function to implement DDA algorithm to draw a line
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
setcolor(10);
line(200,350,400,350);
line(200,350,300,200);
line(400,350,300,200);
line(400,350,300,200);
setfillstyle(1,5);
floodfill(202,348,10);
getch();
}
