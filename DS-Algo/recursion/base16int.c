/*print base 16 integers*/
void printInt(unsigned int number,const int base){
    char* conversion="0123456789ABCDEF";
    char digit=number%base;
    if(number/=base){
        printInt(number,base);
        printf("%c",conversion[digit]);
    }
}
/* Time Complexity is O(n) */