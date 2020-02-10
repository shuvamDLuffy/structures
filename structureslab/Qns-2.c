#include <stdio.h>
#include <math.h>
struct rectangle_r{
int x;
int y;

};


int main()
{
struct rectangle_r p1 = {0,0};
struct rectangle_r p2 = {100,75};
struct rectangle_r p3 = {-60,80};

printf("The three points of triangle is (%d,%d),(%d,%d),(%d,%d)",p1.x,p1.y,p2.x,p2.y,p3.x,p3.y);
return 0;
}