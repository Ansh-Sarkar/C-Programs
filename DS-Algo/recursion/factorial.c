#include<stdio.h>
int factorial(unsigned int i){
    /*Termination condition*/
    if(i<=1){
        return 1;
    }
    /*Body or Recursive Expansion*/
    return i*factorial(i-1);
}
/* Time Complexity : O(n) */