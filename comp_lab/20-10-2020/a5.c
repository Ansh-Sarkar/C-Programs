#include<stdio.h>
int main(){
    int hour,min;printf("Please enter time in 24 hr format : ");
    scanf("%d%d",&hour,&min);
    if(hour>=0&&hour<=24&&min>=0&&min<=60){
        if(hour<24&&hour>=12){
            printf("12 hr format : %d %d pm",(hour-12),min);
        }
        else if(hour<12){
            printf("12 hr format : %d %d am",hour,min);
        }
        else
        {
            printf("12 hr format : %d %d am",(hour-12),min);
        }  
    }
    return 0;
}