#include<stdio.h>
/*declaring the function prototypes*/
void printArrayUsingPointer(int arr[],int count);
void printArrayAddress(int arr[],int count);
void printArray(int arr[],int count);
/*this is the main function*/
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        arr[i]=i;
    }
    printArrayAddress(arr,10);
    return 0;
}
/*printing the data stored in the array*/
void printArray(int arr[],int count){
    printf("Values stored in array are : ");
    for(int i=0;i<count;i++){
        printf("[%d]",arr[i]);
    }
}
/*printing array data along with address using base pointer of array*/
void printArrayAddress(int arr[],int count){
    printf("Values stored in array are : ");
    for(int i=0;i<count;i++){
        printf("Data : [%d] has Address : [%p]\n",arr[i],arr+i);
        /*The name of the array (in this case arr) is a pointer to the base address*/
    }
}
/*displaying data as well as the address using pointer*/
void printArrayUsingPointer(int arr[],int count){
    printf("Values stored in array are : ");
    int *ptr=arr;
    for(int i=0;i<count;i++){
        printf("Data : [%d] has Address : [%p]\n",*ptr,ptr);
        ptr++;
    }
}