#include<stdio.h>
int main(){
    int a,b,c;printf("Enter 3 numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("%d is greatest among %d %d %d",a,a,b,c);
        }
        else{
            printf("%d is greatest among %d %d %d",c,a,b,c);
        }
    }
    else{
        if(b>c){
            printf("%d is greatest among %d %d %d",b,a,b,c);
        }
        else
        {
            printf("%d is greatest among %d %d %d",c,a,b,c);
        }
    }
    return 0;
}