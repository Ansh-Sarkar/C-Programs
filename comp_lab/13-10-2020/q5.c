#include<stdio.h>
int main(){
    int a,b,c,d;printf("Enter 4 numbers : ");scanf("%d%d%d%d",&a,&b,&c,&d);
    int smallest = (a<b&&a<c&&a<d)?a:((b<c&&b<a&&b<d)?b:((c<a&&c<b&&c<d)?c:d));
    printf("The smallest integer is : %d",smallest);
    return 0;
}