#include<stdio.h>
/*prototype functions*/
void print2darray(int* arr[],int row,int col);
void yo(int* arr[],int row,int col);
/*main function*/
int main(){
    int arr[4][2];
    int count=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            arr[i][j]=count++;
        }
    }
    yo((int**)arr,4,2);
    print2darray((int**)arr,4,2);
    return 0;
}
/*printing only data*/
void print2darray(int* arr[],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
        {
            printf("[%d]",*(arr+i*col+j)); /*important formula for calculating position or address of a cell*/
        }
    }
}
/*printing data along with the address*/
void yo(int* arr[],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<0;j++){
            printf("Data : [%d] , Address : [%p]\n",*(arr+i*col+j),(arr+i*col+j));
        }
    }
}