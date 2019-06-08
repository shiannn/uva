#include <stdio.h>
#include <stdlib.h>
#define max_student 10000
#define num_course 5
//#define debug

int course[max_student][num_course];
int cmp1(const void*arg1,const void*arg2){
    int a=*(int*)arg1;
    int b=*(int*)arg2;
    if(a>b)return 1;
    else if(a<b)return -1;
    else return 0;
}
int cmp(const void*arg1,const void*arg2){
    int* a=(int*)arg1;
    int* b=(int*)arg2;
    int hash_a=1*a[0]+10*a[1]+100*a[2]+1000*a[3]+10000*a[4];
    int hash_b=1*b[0]+10*b[1]+100*b[2]+1000*b[3]+10000*b[4];

    if(hash_a>hash_b)return 1;
    else if(hash_a<hash_b)return -1;
    else return 0;
}
int main(){
    int num_student;
    while(scanf("%d",&num_student)!=EOF){
        if(num_student==0)break;
        int i,j;
        for(i=0;i<num_student;i++){
            for(j=0;j<5;j++){
                scanf("%d",&course[i][j]);
            }
        }
        //sorting for each students
        for(i=0;i<num_student;i++){
            qsort(course[i],5,sizeof(course[i][0]),cmp1);
        }
        //sorting for all student
        //sorting with hash
        qsort(course,num_student,sizeof(course[0]),cmp);
#ifdef debug
        for(i=0;i<num_student;i++){
            for(j=0;j<5;j++){
                printf("%d ",course[i][j]);
            }
            printf("\n");
        }
#endif
        int count=1,max=0,people=0;
        for(i=0;i<num_student;i++){
            count=1;
            while(i<num_student-1&&1*course[i][0]+10*course[i][1]+100*course[i][2]+1000*course[i][3]+10000*course[i][4]==1*course[i+1][0]+10*course[i+1][1]+100*course[i+1][2]+1000*course[i+1][3]+10000*course[i+1][4]){
                i++;
                count++;
            }
            if(count>max){
                max=count;
                people=count;
            }
            else if(count==max){
                people+=count;
            }
        }
        printf("%d\n",people);
    }
    
}
//二維陣列cmp
