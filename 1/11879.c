#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char number[101];
int main(){
    while(1){
        scanf("%s",number);
        if(number[0]=='0')break;
        int len=strlen(number);
        int i,module=0;
        for(i=0;i<len;i++){
            module=(module*10+(number[i]-'0'))%17;    
        }
        //printf("%d\n",module);
        if(module==0){
            printf("1\n");
        }
        else{
            printf("0\n");
        }
    }
}


