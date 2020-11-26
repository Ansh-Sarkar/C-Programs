#include<stdio.h>
/*just to understand the functioning of the system stack*/
void fun2(void){
    printf("fun2 line 1\n");
}
void fun1(void){
    printf("fun1 line 1\n");
    fun2();
    printf("fun1 line 2\n");
}
int main(void){
    printf("main line 1\n");
    fun1();
    printf("main line 2\n");
    return 0;
}