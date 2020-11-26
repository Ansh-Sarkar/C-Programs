#include<stdio.h>
void printArray(int* arr[],int count){
    int *ptr;
    for(int i=0;i<count;i++){
        ptr=arr[i];
        printf("[%d]",*ptr);
    }
    printf("\n");
}
void printArrayAddress(int* arr[],int count){
    int *ptr;
    for(int i=0;i<count;i++){
        ptr=arr[i];
        printf("Value is : [%d] , Address is : [%p] \n",*ptr,ptr);
    }
}
int main(){
    int one=1,two=2,three=3;
    int* arr[3];
    arr[0]=&one;arr[1]=&two;arr[2]=&three;
    printArray(arr,3);
    printArrayAddress(arr,3);
    return 0;
}