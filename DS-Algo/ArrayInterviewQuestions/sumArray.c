/*write a function that returns sum of all elements in an array*/
int sumArray(int arr[],int size){
    int total=0;
    for(int index=0;index<size;index++){
        total=total+arr[index];
    }
    return total;
}