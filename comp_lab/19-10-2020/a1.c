#include<stdio.h>
int main(){
    unsigned char a;
    printf("Enter a number : ");
    scanf("%u",&a);
    printf("After manipulation : %d %d",(a & 0xf0),(a & 0x0f));
    return 0;
}

