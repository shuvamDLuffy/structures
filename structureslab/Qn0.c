#include <stdio.h>

struct rectangle_r
{ 
 int x;    
 int y; };

 int main()
 {
    struct rectangle_r p1={3,4};
    printf("P(%d,%d)",p1.x,p1.y);
 }