#include<stdio.h>
int main(){
    int three,four,three_mid,four_mid,three_left,four_left;
    printf("Enter a 3 digit number : ");scanf("%d",&three);
    printf("Enter a 4 digit number : ");scanf("%d",&four);
    three_mid=(three/10)%10;four_mid=(four/10)%100;
    three_left=(three/100)*10+(three%10);
    four_left=(four/1000)*10+(four%10);
    (three_mid*three_mid==three_left)?printf("Condition satisfied for 3 digit number\n"):printf("Condition not satisfied for 3 digit number\n");
    (four_mid*four_mid==four_left)?printf("Condition satisfied for 4 digit number\n"):printf("Condition not satisfied for 4 digit number\n");
    return 0;
}