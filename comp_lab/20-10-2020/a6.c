#include<stdio.h>
int main(){
    int day1,month1,year1,day2,month2,year2;
    printf("Enter first date in dd mm yyyy format : ");
    scanf("%d%d%d",&day1,&month1,&year1);
    printf("Enter first date in dd mm yyyy format : ");
    scanf("%d%d%d",&day2,&month2,&year2);
    if(year1>year2){
        printf("%d %d %d was earlier to %d %d %d",day2,month2,year2,day1,month1,year1);
    }
    else if(year1==year2){
        if(month1>month2){
            printf("%d %d %d was earlier to %d %d %d",day2,month2,year2,day1,month1,year1);
        }
        else if(month2==month1){
            if(day1>day2){
                printf("%d %d %d was earlier to %d %d %d",day2,month2,year2,day1,month1,year1);
            }
            else if(day1==day2){
                printf("Both of them are the sames dates");
            }
            else{
                printf("%d %d %d was earlier to %d %d %d",day1,month1,year1,day2,month2,year2);
            }
        }
        else{
            printf("%d %d %d was earlier to %d %d %d",day1,month1,year1,day2,month2,year2);
        }
    }
    else{
        printf("%d %d %d was earlier to %d %d %d",day1,month1,year1,day2,month2,year2);
    }
    return 0;
}