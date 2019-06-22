#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

#define max_friend 50010
using namespace std;
int x[max_friend];
int y[max_friend];
int main(){
    
    int test,s,a,f;
    scanf("%d",&test);
    for(int te=0;te<test;te++){
        scanf("%d %d %d",&s,&a,&f);
        for(int i=0;i<f;i++){
            scanf("%d",&x[i]);
            scanf("%d",&y[i]);
        }
        sort(x,x+f);
        sort(y,y+f);
        int midx=x[(f-1)/2],midy=y[(f-1)/2];
        printf("(Street: %d, Avenue: %d)\n",midx,midy);
    }
}
