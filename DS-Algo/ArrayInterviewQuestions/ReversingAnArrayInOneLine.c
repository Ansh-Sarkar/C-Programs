void reverseArray(int *a,int n){
    for(int i=0,j=n-1;i<j;i++,j--){
        /*extremely important implementation for swapping two numbers in one line*/
        a[i]^=a[j]^=a[i]^=a[j];
    }
}