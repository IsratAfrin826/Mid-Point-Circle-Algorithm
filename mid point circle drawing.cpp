
#include <graphics.h>
#include <conio.h>
#include <iostream>
using namespace std;

void drawSymmetricPixels(int xc, int yc, int x, int y) {
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
    putpixel(xc + y, yc + x, WHITE);
    putpixel(xc - y, yc + x, WHITE);
    putpixel(xc + y, yc - x, WHITE);
    putpixel(xc - y, yc - x, WHITE);
}

void midpointCircleGraphics(int xc, int yc, int r) {
    int x = 0;
    int y = r;
    int p = 1 - r;

    drawSymmetricPixels(xc, yc, x, y);

    while (x < y) {
        x++;
        if (p < 0) {
            p = p + 2 * x + 1;
        } else {
            y--;
            p = p + 2 * (x - y) + 1;
        }
        drawSymmetricPixels(xc, yc, x, y);
    }
}

int main() {
    int xc, yc, r;
    cout << "Enter center (x y): ";
    cin >> xc >> yc;
    cout << "Enter radius: ";
    cin >> r;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    midpointCircleGraphics(xc, yc, r);

    getch();
    closegraph();
    return 0;
}
