int gcd(int m,int n){
    if(m<n){
        return(gcd(m,n));
    }
    if(m%n==0){
        return(n);
    }
    return gcd(n,m%n);
}
/*euclid's algorithm : gcd(n,m) == gcd(m,n mod m)*/