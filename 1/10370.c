#include <stdio.h>
#include <stdlib.h>
#define max 1001

int score[max];

int main(){
    int C;
    scanf("%d",&C);
    int i,j,N,temp,num;
    double aver;
    for(i=0;i<C;i++){
        scanf("%d",&N);
        temp=0;
        num=0;
        for(j=0;j<N;j++){
            scanf("%d",&score[j]);
            temp+=score[j];
        }
        aver=(double)temp/(double)N;
        for(j=0;j<N;j++){
            if(score[j]>aver)num++;
        }
        double ratio=(double)num/(double)N;
        ratio*=100;
        printf("%.3lf%%\n",ratio);
    }
}
