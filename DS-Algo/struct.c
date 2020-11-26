#include<stdio.h>
/*implementing structures*/
struct coord
{
    /* data */
    int x;
    int y;
};
int main(){
    struct coord point;
    point.x=10;
    point.y=10;
    printf("X coordinate value is : %d\n",point.x);
    printf("Y coordinate value is : %d\n",point.y);
    printf("Size of the structure is : %d bytes\n",sizeof(point));
    return 0;
}