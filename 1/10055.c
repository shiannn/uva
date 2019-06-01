#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int a,b;
    while(scanf("%u %u",&a,&b)!=EOF){
       printf("%u\n",abs(a-b)); 
    }
}
