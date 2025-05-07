#include <graphics.h>
#include <iostream>
using namespace std;

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Original rectangle
    int x1 = 100, y1 = 100, x2 = 200, y2 = 200;

    float sx, sy;
    cout << "Enter scaling factors (sx, sy): ";
    cin >> sx >> sy;

    // Original shape
    setcolor(WHITE);
    rectangle(x1, y1, x2, y2);
    outtextxy(x1, y1 - 10, "Original graph");

    // Scaled shape
    setcolor(RED);
    rectangle(x1 * sx, y1 * sy, x2 * sx, y2 * sy);
    outtextxy(x1 * sx, y1 * sy - 10, "Scaled graph");

    getch();
    closegraph();
    return 0;
}

