#include <graphics.h>
#include <stdio.h>

void main() {
    int gd = DETECT, gm, i = 0;
    int p[] = {200, 200, 300, 200, 250, 150, 200, 200};

    initgraph(&gd, &gm, "c:\\TC\\BGI");
    cleardevice();

    // Draw the roof
    drawpoly(4, p);

    // Draw the left section of the house
    rectangle(200, 200, 300, 300);

    // Draw the right section of the house
    rectangle(300, 200, 450, 300);

    // Draw the roof line
    line(250, 150, 400, 150);
    line(400, 150, 450, 200);

    // Draw the door on the left section
    rectangle(230, 250, 270, 300);
    line(250, 250, 250, 300);

    // Draw windows on the right section
    rectangle(320, 240, 350, 270);
    rectangle(400, 240, 430, 270);

    // Draw additional lines on the roof
    for (i = 260; i < 400; i += 10) {
        line(i, 150, i + 50, 200);
    }

    // Draw and fill the circular window
    circle(250, 180, 10);
    setfillstyle(SOLID_FILL, RED);
    floodfill(250, 180, WHITE);

    // Wait for user to press a key
    getch();

    // Close the graphics mode
    closegraph();
}
