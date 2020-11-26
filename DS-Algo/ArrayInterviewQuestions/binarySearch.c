/*Binary search - Iterative Way
  Note : Array should be sorted*/
int binarySearch(int arr[],int size,int value){
    int low=0,mid=0,high=size-1;
    while(low<=high){
        mid=low+(high-low)/2;/*to avoid overflow*/
        if(arr[mid]==value){
            return mid;
        }
        else if (arr[mid]<value)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}