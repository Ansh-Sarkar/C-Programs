#include<stdio.h>
int main(){
    int a,b,c;printf("Enter price of 3 items : ");
    scanf("%d%d%d",&a,&b,&c);
    int total=a+b+c;
    if(total>5000){
        printf("Amount to be payed = Rs.%.2f",(0.8*total));
    }
    else if(total>3000){
        printf("Amount to be payed = Rs.%.2f",(0.9*total));
    }
    else if(total>1000){
        printf("Amount to be payed = Rs.%.2f",(0.95*total));
    }
    else
    {
        printf("Amount to be payed = Rs.%.2f",total);
    }
    return 0;
}