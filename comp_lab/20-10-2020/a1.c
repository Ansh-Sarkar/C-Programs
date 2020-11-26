#include<stdio.h>
int main(){
    int a;printf("Enter a number : ");scanf("%d",&a);
    if(a>=100&&a<=999){
        printf("Middle number : %d",((a%100)/10));
    }
    else if(a>=1000&&a<=9999){
        printf("Middle number : %d",((a%1000)/10));
    }
    else if(a>=10000&&a<=99999){
        printf("Middle number : %d",((a%1000)/100));
    }
    return 0;
}