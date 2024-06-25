#include<graphics.h>
#include<conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    line(0,300,640,300);
    setcolor(4);
    circle(100,285,15); //first wheel
    circle(200,285,15);     //second wheel
    circle(100,285,5);      //smaller circle
    circle(200,285,5);      //smaller circle
    line(65,285,85,285);    //connecting 1st wheel
    line(115,285,185,285);  //conn between 2 wheel
    line(215,285,235,285);  //connecting second wheel
    line(65,285,65,260);    //left side vertical body
    line(235,285,235,260);  //right side vertical body
    line(65,260,100,255);   //frount windshield
    line(235,260,200,255);   //rear windshield
    line(100,255,115,235);  //horizontal line top of the vehical
    line(200,255,185,235);  //diagonal line and front slope vehical body
    line(115,235,185,235);  //rear slope..
    line(106,255,118,238); //diagonal
    line(118,238,118,255);  //vertical
    line(106,255,118,255);   //horizontal
    line(194,255,182,238);  //diagonal
    line(182,238,182,255);  //vertical
    line(194,255,182,255);  //horizontal
    line(121,238,121,255);  //v
    line(121,238,148,238);  //h
    line(121,255,148,255);  //h
    line(148,255,148,238);  //v
    line(179,238,179,255);  //v
    line(179,238,152,238);  //h
    line(179,255,152,255);  //h
    line(152,255,152,238);  //v
    setcolor(4);
    getch();
    closegraph();
    return 0;
}
