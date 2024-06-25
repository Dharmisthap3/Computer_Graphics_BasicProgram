#include<conio.h>
#include<graphics.h>
void fldfill(int x, int y,int f,int oldcolor)
{
    if(getpixel(x,y)==oldcolor)
    {
        putpixel(x,y,f);
        putpixel(x,y,f);
        delay(2);
        fldfill(x+1,y,f,oldcolor);
        fldfill(x-1,y,f,oldcolor);
        fldfill(x,y+1,f,oldcolor);
        fldfill(x,y-1,f,oldcolor);
    }
}
void main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    rectangle(50,50,100,100);
    fldfill(55,55,RED,0);
    getch();
    closegraph();
}
