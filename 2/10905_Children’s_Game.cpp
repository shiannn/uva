#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_num 50
//#define debug
char number[max_num][10000];
int cmp(const void*arg1,const void*arg2){
    char* a1=(char*)arg1;
    char* a2=(char*)arg2;
    char a1a2[20000];
    char a2a1[20000];
    sprintf(a1a2,"%s%s",a1,a2);
    sprintf(a2a1,"%s%s",a2,a1);
    if(strcmp(a1a2,a2a1)>0)return -1;
    else if(strcmp(a1a2,a2a1)<0)return 1;
    else return 0;
}
int main(){
    int N;
    while(scanf("%d",&N)!=EOF){
        if(N==0)break;
        int i;
        for(i=0;i<N;i++){
            scanf("%s",number[i]);
        }
        qsort(number,N,sizeof(number[0]),cmp);
        for(i=0;i<N;i++){
            printf("%s",number[i]);
        }
        printf("\n");
    }
}
//那些函式會補'\0'
