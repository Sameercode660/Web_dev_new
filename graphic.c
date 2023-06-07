#include <graphics.h>

int main() {
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");

   // Draw triangle
   line(100, 100, 200, 200);
   line(200, 200, 300, 100);
   line(300, 100, 100, 100);

   getch();
   closegraph();
   return 0;
}
