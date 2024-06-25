#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    int x = 300, y = 200; // Coordinates for the center of the face
    int radius = 100; // Radius of the face

    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    if (graphresult() != grOk) {
        printf("Graphics error: %s\n", grapherrormsg(graphresult()));
        getch();
        return 1;
    }

    // Draw the face
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    circle(x, y, radius);
    floodfill(x, y, YELLOW);

    // Draw the left eye
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    circle(x - 35, y - 35, 10);
    floodfill(x - 35, y - 35, BLACK);

    // Draw the right eye
    circle(x + 35, y - 35, 10);//representing eye
    floodfill(x + 35, y - 35, BLACK);

    // Draw the mouth
    setcolor(BLACK);
    arc(x, y + 20, 180, 360, 35); // A simple arc for the smile

    // Wait for user to press a key
    getch();

    // Close the graphics mode
    closegraph();
    return 0;
}
