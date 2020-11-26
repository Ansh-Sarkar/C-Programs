#include<stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++)
        arr[i]=i;
    for(int i=0;i<10;i++){
        printf("%d",arr[i]);
    }
    return 0;
}