#include <stdio.h>
#include <stdlib.h>

long long abso(long long int x){
    if(x>=0)return x;
    return -x;
}
int main(){
    long long int a,b;
    //maintain unsign 0~2^32-1
    //fabs use float
    while(scanf("%lld %lld",&a,&b)!=EOF){
       printf("%lld\n",abso(a-b)); 
    }
}
