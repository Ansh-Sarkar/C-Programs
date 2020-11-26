#include<stdio.h>
int main(){
    int number,copy,sum=0;
    printf("Enter a number (4 digit) : ");scanf("%d",&number);
    sum+=number%10;number/=10;
    sum+=number%10;number/=10;
    sum+=number%10;number/=10;
    sum+=number;
    printf("Sum of digits is : %d",sum);
    return 0;
}