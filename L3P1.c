#include <graphics.h>
#include <stdio.h>
#include <math.h>
void dda(int xa,int ya,int xb,int yb)
{
    int dx=xb-xa ,dy=yb-ya, steps,k; //calculates the differences in the x and y coordinates and declares variables steps and k.
    float xinc, yinc ,x=xa,y=ya;// increments and the current position
    if(abs(dx)>abs(dy)) //absolute values of dx and dy
{
steps=abs(dx);
}
else
{
steps=abs(dy);
}
    xinc=dx/(float)steps;//draws the first pixel 
    yinc=dy/(float)steps;
    putpixel(floor(x + 0.5),floor(y + 0.5),12); //12 color code
    for(k=0;k<steps;k++) //draw the remaining pixels
    {
    x=x+xinc;
    y=y+yinc;
    putpixel(floor(x + 0.5),floor(y + 0.5),12);
    delay(10);
    }
}
void main()
{
    int gd=DETECT ,gm;
    int x1,y1,x2,y2;
    printf("Enter x1 : \n");
    scanf("%d",&x1);
    printf("Enter y1 : \n");
    scanf("%d",&y1);
    printf("Enter x2 : \n");
    scanf("%d",&x2);
    printf("Enter y2 : \n");
    scanf("%d",&y2);
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    dda(x1,y1,x2,y2);
    getch();
    closegraph();
	}
