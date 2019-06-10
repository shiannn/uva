#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_marble 10001
//#define debug

int marble[max_marble];
 
int main(){
    int N,Q;
    while(scanf("%d %d",&N,&Q)!=EOF){
        if(N==0&&Q==0)break;
        int max=0;
        for(int i=0;i<N;i++){
            int temp;
            scanf("%d",&temp);
            marble[temp]++;
            if(temp>max){
                max=temp;
            }
        }
        //prefixsum
        for(int i=1;i<=max;i++){
            marble[i]=marble[i]+marble[i-1];
        }
        //counting sort marble
#ifdef debug
printf("countingsort start\n");
for(int i=0;i<=max;i++){
    printf("%d ",marble[i]);
    printf("\n");
}
printf("countingsort end\n");
#endif
        //answer Q
        int question;
        for(int i=0;i<Q;i++){
            printf("CASE# %d:\n",i+1);
            scanf("%d",&question);
            if(question==0){
                if(marble[question]==0)printf("0 not found\n");
                else printf("0 found at 1\n");
            }
            else{ 
                if(marble[question]==marble[question-1]){
                    printf("%d not found\n",question); 
                }
                else{
                    printf("%d found at %d\n",question,marble[question-1]+1);
                }
            }
        }
        memset(marble,0,4*max);
    }
}
