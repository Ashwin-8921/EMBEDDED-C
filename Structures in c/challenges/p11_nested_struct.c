/*How can you initialize every member of a structure—including nested structures and arrays—at the time of declaration
struct Point {
    int x, y;
};
struct Shape {
    struct Point center;
    int points[4];
};*/



#include <stdio.h>

struct Point 
{
    int x, y;
};

struct Shape 
{
    struct Point center;
    int points[4];
};

int main() 
{
    //struct Shape s = { {10, 20}, {1, 2, 3, 4} };
     struct Shape s = {
        .center = { .x = 10, .y = 20 },    
        .points = {1, 2, 3, 4}           
    };
    printf("Center: (%d, %d)\n", s.center.x, s.center.y);
    printf("Points: %d %d %d %d\n", s.points[0], s.points[1], s.points[2], s.points[3]);
    return 0;
}
