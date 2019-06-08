#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_digits 11 //'\0'
#define max_numbers 10000

char phone_numbers[max_numbers][max_digits];
int cmp(const void* arg1,const void* arg2);
int main(){
    //input
    int testcase;
    scanf("%d",&testcase);
    int i;
    for(i=0;i<testcase;i++){
        int num_of_phones_number;
        scanf("%d",&num_of_phones_number);
        int j;
        for(j=0;j<num_of_phones_number;j++){
            scanf("%s",phone_numbers[j]);
        }
        //sort with length
        qsort(phone_numbers,num_of_phones_number,sizeof(phone_numbers[0]),cmp);

        //check the i-1 th numbers is the prefix of the i th numbers
        int yes_no=1;
        for(j=0;j<=num_of_phones_number-2;j++){
            int k;
            for(k=j+1;k<=num_of_phones_number-1;k++){
                if(strncmp(phone_numbers[j],phone_numbers[k],strlen(phone_numbers[j]))==0){
                    yes_no=0;
                    break;
                }
            }
            if(yes_no==0)break;
        }
        if(yes_no==1)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

//不是很懂如何處理二維陣列的cmp參數
int cmp(const void* arg1,const void* arg2){
    char*a= (char*)(arg1);
    char*b= (char*)(arg2);
    if(strlen(a)>strlen(b))return 1;
    else{
        return 0;
    }
}

//O(n^2)?

