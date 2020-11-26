#include<stdio.h>
void increment(int var){
    var++;
}
int main(){
    int i=10;
    printf("Value of i before increment is : %d\n",i);
    increment(i);
    printf("Value of i after increment is : %d\n",i);
    return 0;
}