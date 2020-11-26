#include<stdio.h>
int main(){
    int five,six;
    printf("Enter a 5 digit number : ");scanf("%d",&five);
    printf("Enter a 6 digit number : ");scanf("%d",&six);
    printf("\n%d",((five/100)%10));
    printf("\n%d",((six/100)%100));
    return 0;
}