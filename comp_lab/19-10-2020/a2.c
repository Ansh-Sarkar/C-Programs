#include<stdio.h>
int main(){
    int a;printf("Enter an integer : ");
    scanf("%d",&a);
    printf("After manipulation : %d %d %d %d",((a&0xff000000)>>24),((a&0xff0000)>>16),((a&0xff00)>>8),(a&0xff));
    return 0;
}
