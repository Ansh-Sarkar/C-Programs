
#include<stdio.h>
/*a given integer into string*/
char *intToStr(char *p,unsigned int number){
    char digit=number%10+'0';
    if(number/=10){
        p=intToStr(p,number);
        *p++=digit;
        return(p);
    }
}
int main(void){
    char *p;
    printf("%s",intToStr(p,12324));
    return(0);
}