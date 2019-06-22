//左閉右開的除以 新的右邊界
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#define max 1000010
using namespace std;

int array[max];
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int a1,a2=0,a3;
        for(int i=0;i<n;i++){
            scanf("%d",&array[i]);
        }
        sort(array,array+n);
        a1=array[(n-1)/2];
        for(int i=0;i<n;i++){
            if(array[i]==array[(n-1)/2]||array[i]==array[n/2])a2++;
        }
        a3=array[n/2]-array[(n-1)/2]+1;
        printf("%d %d %d\n",a1,a2,a3);
    }
}
