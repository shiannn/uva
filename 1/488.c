#include <stdio.h>
#include <stdlib.h>

int main(){
    int testcase;
    scanf("%d",&testcase);
    int i,j,k,ksub,amplitude,freqeuncy;
    char in[2],te;
    for(i=0;i<testcase;i++){
        //fgets(in,2,0);
        scanf("%c",&te);
        scanf("%d",&amplitude);
        scanf("%d",&freqeuncy);
        for(j=0;j<freqeuncy;j++){
            for(k=1;k<=amplitude;k++){
                for(ksub=1;ksub<=k;ksub++){
                    printf("%d",k);
                }
                printf("\n");
            }
            for(k=amplitude-1;k>=1;k--){
                for(ksub=1;ksub<=k;ksub++){
                    printf("%d",k);
                }
                printf("\n");
            }
            if(j!=freqeuncy-1)printf("\n");
        }
    }
}
