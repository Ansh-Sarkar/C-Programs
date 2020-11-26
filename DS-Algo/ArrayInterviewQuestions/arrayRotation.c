/*Rotate a given array by K positions
  Eg: before => [10,20,30,40,50,60]
      after rotating by 2 positions => [30,40,50,60,10,20]*/
void rotate(int *a,int n,int k){
    reverseArray(a,k);
    reverseArray(&a[k],n-k);
    reverseArray(a,n);
}
void reverseArray(int *a,int n){
    for(int i=0,j=n-1;i<j;i++,j--){
        /*extremely important implementation for swapping two numbers in one line*/
        a[i]^=a[j]^=a[i]^=a[j];
    }
}