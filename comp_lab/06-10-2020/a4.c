#include<stdio.h>
int main(){
    int sub1=0,sub2=0,sub3=0;float avg=0.0;
    printf("Enter marks in 1st , 2nd and 3rd subjects : ",&sub1,&sub2,&sub3);
    scanf("%d%d%d");
    avg=(sub1+sub2+sub3)/3;
    printf("\nSubject 1  %d\n",sub1);
    printf("Subject 2  %d\n",sub2);
    printf("Subject 3  %d\n",sub3);
    printf("-------------\n");
    printf("Average : %f",avg);
    return 0;
}