#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    long long int n;
    while(scanf("%lld",&n)!=EOF){
        if(n==0)break;
        unsigned int root=(unsigned int)sqrt(n);
        if(root*root==n)printf("yes\n");
        else printf("no\n");
    }
}
//truncate to pass
