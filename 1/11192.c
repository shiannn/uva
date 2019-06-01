#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_len 100


int G;
char string[max_len];
int main(){
    while(1){
        scanf("%d",&G);
        if(G==0)break;
        scanf("%s",string);
        int len=strlen(string);
        int element=len/G;
        int i,j;
        for(i=0;i<len;i=i+element){
            //0~element-1
            for(j=i+element-1;j>=i;j--){
                printf("%c",string[j]);
            }
        }
        printf("\n");
    }
}
