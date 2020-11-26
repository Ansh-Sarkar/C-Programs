#include<stdio.h>
int main(){
    int year;printf("Please enter a year to check : ");scanf("%d",&year);
    printf("%d",((year%400==0)||((year%4==0)&&(year%100!=0))));
    return 0;
}