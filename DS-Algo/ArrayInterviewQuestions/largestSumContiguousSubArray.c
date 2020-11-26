/*given an array of positive and negative integers , find a contiguous
  subarray whose sum (sum of elements) is maximized*/
int maxSubArraySum(int a[],int size){
    int maxSoFar=0,maxEndingHere=0;
    for(int i=0;i<size;i++){
        maxEndingHere=maxEndingHere+a[i];
        if(maxEndingHere<0){
            maxEndingHere=0;
        }
        if(maxSoFar<maxEndingHere){
            maxSoFar=maxEndingHere;
        }
    }
    return maxSoFar;
}