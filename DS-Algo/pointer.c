#include<stdio.h>
int main(){
    int var,*ptr;
    var=10;
    ptr=&var;
    printf("Value stored at variable var is : %d\n",var);
    printf("Value stored at variable var is : %d\n",*ptr);

    printf("Address of variable var is : %p \n",&var);
    printf("Address of variable var is : %p \n",ptr);
    return 0;
}