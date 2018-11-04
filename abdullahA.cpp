

#include "abdullahA.h"

void showName() {
  Rect r;
  r.left = 16;
  r.top = 16;
  r.right = 256;
  r.bot = 256;
  r.width = 256;
  r.height = 32;
  r.center = 128;
  r.centerx = 128;
  r.centery = 16;

  ggprint8b(&r, 16, 0x00ff0000,"Abdullah, Aljahdali");
  printf("Abdullah, Aljahdali");
}
