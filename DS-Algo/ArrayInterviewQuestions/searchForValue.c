/*function for checking whether given element in an array or not.
  if found , return the index position of the element else return -1*/
int search(int arr[],int size,int value){
    for(int index=0;index<size;index++){
        if(value==arr[index]){
            return index;
        }
    }
    return -1;
}