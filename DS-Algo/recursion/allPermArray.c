/*program for finding all the possible permutations of an integer array*/
void printArr(int arr[],int count){
    printf("Values stored in array are : ");
    for(int i=0;i<count;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}
void swap(int* arr,int x,int y){
    int temp=arr[x];
    arr[x]=arr[y];
    arr[y]=temp;
    return;
}
void permutations(int *arr,int i,int length){
    if(length==i){
        printArr(arr,length);
        return;
    }
    int j=i;
    for(j=i;j<length;j++){
        swap(arr,i,j);
        permutations(arr,i+1,length);
        swap(arr,i,j);
    }
    return;
}
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        arr[i]=i;
    }
    permutations(arr,0,5);
}