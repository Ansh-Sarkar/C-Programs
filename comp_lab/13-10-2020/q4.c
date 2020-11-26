#include<stdio.h>
int main(){
    int a,b,c;printf("Enter 3 numbers : ");scanf("%d%d%d",&a,&b,&c);
    printf("The second largest integer is : %d",((a>=b&&a>=c)?((b>=c)?b:c):((b>=c)?((a>=c)?a:c):((a>=b)?a:b))));
    return 0;
}
