#include <stdio.h>
#include <math.h>

struct coordinate{
int x;
int y;

};

struct rectangle{
    struct coordinate p1,p2,p3,p4;

};

struct square{
    struct coordinate p1,p2,p3,p4;

};


int main()
{
struct rectangle t1 = {{0,0},{5,6},{5,5},{6,6}};
struct square t2 = {{1,2},{2,4},{3,4},{3,5}};

printf("The four points of rectangle is (%d,%d),(%d,%d),(%d,%d),(%d,%d).\n The four points of square(%d,%d),(%d,%d),(%d,%d),(%d,%d).",t1.p1.x,t1.p1.y,t1.p2.x,t1.p2.y,t1.p3.x,t1.p3.y,t1.p4.x,t1.p4.y,
t2.p1.x,t2.p1.y,t2.p2.x,t2.p2.y,t2.p3.x,t2.p3.y,t2.p4.x,t2.p4.y);
return 0;
}