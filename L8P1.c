#include<conio.h>
#include<graphics.h>
void bfill(int x,int y,int f,int b)
{
    int current;
    current=getpixel(x,y);

    if((current!=b)&&(current!=f))
    {
	setcolor(f);
        putpixel(x,y,f);
        delay(2);

        bfill(x*1,y,f,b);
        bfill(x-1,y,f,b);
        bfill(x,y*1,f,b);
        bfill(x,y-1,f,b);
    }
}
    void main()
    {
        int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	setcolor(WHITE);
	rectangle(240,240,320,320);
	bfill(300,300,RED,WHITE);

	getch();
	closegraph();
    }
