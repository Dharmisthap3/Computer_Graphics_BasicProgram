#include<stdio.h>
#include<graphics.h>
void bitmap()
{
int i,j;
int a[10][10]={
{1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1},
{1,1,0,0,0,0,0,0,1,1},
{1,1,0,0,0,0,0,0,1,1},
{1,1,1,1,1,1,1,1,1,1},
{1,1,1,1,1,1,1,1,1,1},
{1,1,0,0,0,0,0,0,1,1},
{1,1,0,0,0,0,0,0,1,1},
{1,1,0,0,0,0,0,0,1,1},
{1,1,0,0,0,0,0,0,1,1}
};
for(i=0;i<10;i++)
{
for(j=0;j<10;j++)
{
if (a[i][j]==1)
{
putpixel(j+140,i+100,3);
}
}
}
}
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm," ");
cleardevice();
bitmap();
getch();
closegraph();
}
