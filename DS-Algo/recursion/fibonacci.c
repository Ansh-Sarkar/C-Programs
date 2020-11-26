/*implementing the fibonacci sequence using recursion*/
int fibonacci(int n){
    if(n<=1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
/*note : a special insufficiency exists in this code. we will look for a better solution
  in some other program*/