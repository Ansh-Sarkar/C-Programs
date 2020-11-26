#include<stdio.h>
/*printing base 10 integers*/
void printInt(unsigned int number){
    char digit=number%10+'0';
    if(number/=10){
        printInt(number/10);
        printf("%c",digit);
    }
}
int main(void){
    int digit=1045;
    printInt(1045);
}
/* Time Complexity is O(n) */