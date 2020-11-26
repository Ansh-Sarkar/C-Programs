#include<stdio.h>
void increment(int *ptr){
    (*ptr)++;
}
int main(void){
    int i=10;
    printf("Value before increment : %d\n",i);
    increment(&i);
    printf("Value after increment : %d\n",i);
    return 0;
}