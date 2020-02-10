#include <stdio.h>

#include <stdio.h>
#include <math.h>
struct rectangle_r {
int x;
int y;

};
float euclidean_distance(struct rectangle_r a, struct rectangle_r b){
    float distance =sqrt((b.x-a.x)*(b.x-a.x)+ (b.y-a.y)*(b.y-a.y));
    return distance;
}
int main()
{
struct rectangle_r p1 = {3,5,};
struct rectangle_r p2 = {4,6};
//find the distance between two points p1 and p2 using euclidean distance formula
printf("The distance between [%d,%d] and [%d,%d] is %4.2f.\n"
,
p1.x,p1.y,p2.x,p2.y,euclidean_distance(p1,p2));
return 0;
}