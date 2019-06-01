//sort
//很多題目的前置 mergesort quicksort
//要會用內建的 stl開發速度快 執行速度快 qsort
//使用內建的operator 可以不用寫cmp
//第一個和某個數隨機交換做pivot
//stl stable sort 使用mergesort
//盡量避免平手
//
//流程步驟先想過
//再去確認小步驟
//簡化規則 減少例外 簡潔明確清楚
//增加事前思考時間 減少事後debug時間
#include <stdio.h>
#include <stdlib.h>

#define max 10001

int array[max];
int M;
//int modarray[max];

int cmp(const void* a,const void* b){
    //arg1 before <0 arg1 after >0
    int arg1=*((int*)a);
    int arg2=*((int*)b);
    if(arg1%M==arg2%M){
        //focus on one task
        if((arg1%2==0&&arg2%2==0)||(arg1%2!=0&&arg2%2!=0)){
            if(arg1%2==0){
                if(arg1>arg2)return 1;
                else return -1;
            }
            else{   
                if(arg1<arg2)return 1;
                else return -1;
            }
        }
        else{
            if(arg1%2!=0){
                //C語言 負數取mod會得到負數or 0(整除)
                //+M可以得到正數mod
                return -1;
            }
            else{
                return 1;
            }
        }
    }
    else{
        if(arg1%M>arg2%M)return 1;
        else return -1;
    }
}
int main(){
    //input
    int N;
    while(scanf("%d %d",&N,&M)!=EOF){
        printf("%d %d\n",N,M);
        if(N==0&&M==0)break;
        int i;
        for(i=0;i<N;i++){
            scanf("%d",&array[i]);
        }
        //get mod array
        //for(i=0;i<N;i++){
          //  modarray[i]=array[i]%M;
        //}
        //sort array
        qsort(array,N,sizeof(array[0]),cmp);
        //remember the line example
        for(i=0;i<N;i++){
            printf("%d\n",array[i]);
        }
    }
}

