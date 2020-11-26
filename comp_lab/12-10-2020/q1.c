#include<stdio.h>
int main(){
    int int_;short int sh_int;long int lo_int;long long int ll_int;
    scanf("%d",&int_);printf("%d",int_);
    scanf("%hd",&sh_int);printf("%hd",sh_int);
    scanf("%ld",&lo_int);printf("%ld",lo_int);
    scanf("%lld",&ll_int);printf("%lld",ll_int);
    float float_;double double_;long double l_double;
    scanf("%f",&float_);printf("%f",float_);
    scanf("%lf",&double_);printf("%lf",double_);
    scanf("%Lf",&l_double);printf("%Lf",l_double);
    char c;unsigned int u_int;
    scanf("%c",&c);printf("%c",c);
    scanf("%ud",&u_int);printf("%ud",u_int);
    return 0;
}