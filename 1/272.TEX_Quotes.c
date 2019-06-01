#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 1000000

void dup(int st,int ed,int* into,char output[],char sentence[],int left_right);
    char sentence[max];
    char output[max];
int main(){
    while(fgets(sentence,max,stdin)!=NULL){
        int i,left_right=0,len=strlen(sentence);
        int st=0,ed=0,into=0;
        for(i=0;i<len;i++){
            if(sentence[i]=='\"'&&left_right==0){
                ed=i-1;
                dup(st,ed,&into,output,sentence,left_right);
                st=i+1;
                left_right=1;
            }
            else if(sentence[i]=='\"'&&left_right==1){
                ed=i-1;   
                dup(st,ed,&into,output,sentence,left_right);
                st=i+1;
                left_right=0;
            }
        }
        strcpy(output+into,sentence+st);
        printf("%s",output);
    }
}
void dup(int st,int ed,int* into,char output[],char sentence[],int left_right){
    int i,j;
    for(i=st,j=*into;i<=ed;i++,j++){
        output[j]=sentence[i];
    }
    if(left_right==0){
        output[j]='`';
        j++;
        output[j]='`';
        j++;
    }
    else{
        output[j]='\'';
        j++;
        output[j]='\'';
        j++;
    }
    *into=j;
}
