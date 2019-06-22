#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_age 105

int age[max_age]; 
int main(){
    int n_num_of_people;
    while(scanf("%d",&n_num_of_people)!=EOF){
        memset(age, 0, sizeof(age));
        if(n_num_of_people==0)break;
        int max=0;
        for(int i=0;i<n_num_of_people;i++){
            int temp;
            scanf("%d",&temp);
            age[temp]++;
            if(temp>max)max=temp;
        }
        for(int i=1;i<=max;i++){
            age[i]=age[i]+age[i-1];
        }
        int first=0;
        for(int i=1;i<=max;i++){
            for(int j=0;j<(age[i]-age[i-1]);j++){
                if(first==0){
                    printf("%d",i);
                    first++;
                }
                else printf(" %d",i);
            }
        }
        printf("\n");
    }

}
