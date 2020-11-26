#include<stdio.h>
/*function declaration*/
int sum(int num1,int num2);
int main(){
    /*declaring the local variables*/
    int x=10;
    int y=20;
    int result;
    /*calling function*/
    result=sum(x,y);
    printf("Sum is  : %d\n",result);
    return 0;
}
/*defining sum function*/
int sum(int num1,int num2){
    int result;
    result=num1+num2;
    return result;
}