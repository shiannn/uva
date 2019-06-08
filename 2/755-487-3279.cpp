#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define max_digits 16
#define max_phones 100000
//#define debug
//#define debug_sort

char a[256];
int cmp(const void*arg1,const void* arg2){
    char*str1=(char*)arg1;
    char*str2=(char*)arg2;
    if(strcmp(str1,str2)>0){
        return 1;
    }
    else if(strcmp(str1,str2)<0){
        return -1;
    }
    else{
        return 0;
    }
}
int main(){
a['A']='2';
a['B']='2';
a['C']='2';
a['D']='3';
a['E']='3';
a['F']='3';
a['G']='4';
a['H']='4';
a['I']='4';
a['J']='5';
a['K']='5';
a['L']='5';
a['M']='6';
a['N']='6';
a['O']='6';
a['P']='7';
a['R']='7';
a['S']='7';
a['T']='8';
a['U']='8';
a['V']='8';
a['W']='9';
a['X']='9';
a['Y']='9';
    int testcase;
    scanf("%d",&testcase);
    int i;
    char str[5];
    for(i=0;i<testcase;i++){
        if(i>0)printf("\n");
        fgets(str,5,stdin);
        //get numbers of phone numbers
        int number_of_phones;
        scanf("%d",&number_of_phones);
        //get phone numbers
        int j;
        char phone_number[max_phones][max_digits];
        for(j=0;j<number_of_phones;j++){
            scanf("%s",phone_number[j]);
#ifdef debug
printf("%s\n",phone_number[j]);
#endif
            int k;
            int len=strlen(phone_number[j]);
            int count=0;
            char temp[9];//8+1
            temp[3]='-';
            temp[8]='\0';
            for(k=0;k<len;k++){
                if(isalpha(phone_number[j][k])){
                    temp[count]=a[phone_number[j][k]];
                    count++;
                    if(count==3)count++;
                }
                else if(isdigit(phone_number[j][k])){
                    temp[count]=phone_number[j][k];
                    count++;
                    if(count==3)count++;
                }
                
            }
#ifdef debug
    printf("%s\n",temp);
#endif
            strcpy(phone_number[j],temp);
        }
        //deal with alphabets
        //deal with hyphens
        //sorting

#ifdef debug_sort 
        printf("\n");
        for(j=0;j<number_of_phones;j++){
            printf("%s\n",phone_number[j]);
        }
        printf("\n");
#endif
        qsort(phone_number,number_of_phones,sizeof(phone_number[0]),cmp);
#ifdef debug_sort 
        printf("\n");
        for(j=0;j<number_of_phones;j++){
            printf("%s\n",phone_number[j]);
        }
        printf("\n");
#endif
        //scaning
        int l,calculate,sure=0;
        for(l=0;l<number_of_phones;l++){
            calculate=1;
            while(l<number_of_phones-1&&strcmp(phone_number[l],phone_number[l+1])==0){
                l++;
                calculate++;
            }
            if(calculate>=2){
                printf("%s %d\n",phone_number[l],calculate);
                sure=1;
            }
        }
        if(sure==0)printf("No duplicates.\n");
    }
}
//isalpha isdigit
//for和while
