#include<stdio.h>
int main(){
    int x=0,y=0,z=0;
    printf("Enter 3 numbers : ");
    scanf("%d%d%d",&x,&y,&z);
    printf("  %d  \n %d %d \n%d %d %d\n %d %d \n  %d  ",x,y,(y*y),z,(z*z),(z*z*z),y,(y*y),x);
    return 0;
}