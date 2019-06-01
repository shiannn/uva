#include <stdio.h>
#include <stdlib.h>
//char a[9][10]={"1","22","333","4444","55555","666666","7777777","88888888","999999999"};
//char* a[10]={"abc","1","22","333","4444","55555","666666","7777777","88888888","999999999"};
//{"1","1\n22\n1",}
//char s[]  
//printf("%s",s)
//for(i)printf("%c",s[i])

//cout << endl  <<fflush 清空緩衝
//cout << '\n'
//fread constant upgrade 
int main(){
    int testcase;
    scanf("%d",&testcase);
    int i,j,k,ksub,amplitude,freqeuncy;
    char in[2],te;
    for(i=0;i<testcase;i++){
        if(i!=0)printf("\n");
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
