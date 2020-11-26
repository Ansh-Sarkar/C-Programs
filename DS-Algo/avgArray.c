#include<stdio.h>
/*finding average of all elements in an array*/
float avgArr(int arr[],int size){
    int total=0;
    for(int i=0;i<size;i++){
        total+=arr[i];
    }
    printf("Sum = %d\n",total);
    return (total/size);
}
int main() {
    int arr[4];
    for(int i=0;i<4;i++){
        arr[i]=i;
        printf("Element : %d\n",i);
    }
    printf("Average of array : %f",avgArr(arr,4));
    return 0;
}