#include <stdio.h>
#include <stdlib.h>

int main(){
    char c;
    int count=0;
    while(scanf("%c",&c)!=EOF){
        if(c=='\"'){
            if(count%2==0){
                //left
                printf("``");
            }
            else{
                //right
                printf("''");
            }
            count++;
        }
        else{
            printf("%c",c);
        }
    }
}
