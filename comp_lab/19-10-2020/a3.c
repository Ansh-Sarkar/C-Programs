#include<stdio.h>
int main(){
    int a;
    printf("Enter an integer : ");
    scanf("%d",&a);
    int b=(a&0xff0000)>>8;
    int c=(a&0xff00)<<8;
    int d=a;d=(d&0xff0000ff)|c;d=d|b;
    printf("%x --swap--> %x\n",a,d);
    return 0;
}
