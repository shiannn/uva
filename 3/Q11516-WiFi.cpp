#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#define max_home 100010

using namespace std;
int number[max_home];
int main(){
    int test;
    scanf("%d",&test);
    for(int te=0;te<test;te++){
        int m,n;
        scanf("%d %d",&n,&m);
        for(int i=0;i<m;i++){
           scanf("%d",&number[i]);
        }
        sort(number,number+m);
        int low=0,high=2*(number[m-1]-number[0]+1),mid;
        while(high>low){
            mid=(low+high)/2;
            int need=1;
            int start =number[0];
            for(int j=0;j<m;j++){
                if(number[j]>start+mid){
                    need++;
                    start=number[j];
                }
            }
            if(need>n)low=mid+1;
            else high=mid;
        }
        printf("%.1f\n",high/2.00);
    }
    return 0;
}
