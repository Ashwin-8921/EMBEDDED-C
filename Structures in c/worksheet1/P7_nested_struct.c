/*Nested Structures and Arrays within Structures
Goal
Explore how to organize complex data using nested structures and how to embed arrays inside structures for buffer management.

Activity
Log Session a structure with another structure as a member.
Log Session an array of structures to hold multiple sensor values.
Include arrays within a structure to buffer a set of samples.
Model a protocol layer with header and payload sub-structures.
Tip: Use typedef to simplify nested structure declarations.*/
#include<stdio.h>
struct st
{
int x;
};
struct st1
{
int y;
struct st v;
};
int main()
{

struct st1 v2={1,{2}};
printf("%d %d\n",v2.y,v2.v.x);

}
