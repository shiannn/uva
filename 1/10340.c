#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100000

char str1[max],str2[max];

int main(){
    while(scanf("%s %s",str1,str2)!=EOF){
        int i,j,len1,len2;
        len1=strlen(str1);
        len2=strlen(str2);
        for(i=0,j=0;i<len1;i++){
            while(j<len2&&str2[j]!=str1[i]){
                j++;
            }
            if(j==len2)break; 
        }
        if(j==len2){
            printf("No\n");
        }
        else{
            printf("Yes\n");
        }
    }
}
