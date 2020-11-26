#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a 5 digit number : ");scanf("%d",&a);printf("\n");
    b=a;c=a/10000;
    printf(" %d | %d \n",(b%10),(c%10));
    b/=10;c=a/1000;
    printf(" %d | %d \n",(b%10),(c%10));
    b/=10;c=a/100;
    printf(" %d | %d \n",(b%10),(c%10));
    b/=10;c=a/10;
    printf(" %d | %d \n",(b%10),(c%10));
    b/=10;c=a;
    printf(" %d | %d \n",(b%10),(c%10));
    return 0;
}