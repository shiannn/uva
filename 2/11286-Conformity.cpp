#include <stdio.h>
#include <stdlib.h>
#define max_student 10000
#define num_course 5
#define debug
int course[max_student][num_course];

int cmp(const void*arg1,const void*arg2){
    int a=*(int*)arg1;
    int b=*(int*)arg2;
    if(a>b)return 1;
    else if(a<b)return -1;
    else return 0;
}
int same(int course[][5],int i,int j,int num_student){
    int ii,jj;
    for(ii=0,jj=0;ii<5;ii++,jj++){
        if(course[i][ii]!=course[j][jj])return 0;
    }
    return 1;
}
int cmp2(const void*arg1,const void*arg2){
    int*a=(int*)arg1;
    int*b=(int*)arg2;
    if(a[0]>b[0])return 1;
    else if(a[0]<b[0])return -1;
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
            qsort(course[i],5,sizeof(course[i][0]),cmp);
        }
        //sorting for all student
        for(i=0;i<num_student;i++){
            qsort(course,num_student,sizeof(course[0]),cmp2);
        }
#ifdef debug
        for(i=0;i<num_student;i++){
            for(j=0;j<5;j++){
                printf("%d ",course[i][j]);
            }
            printf("\n");
        }
#endif
        //n^2 scan for same combination
        int count=1,max=1;
        for(i=0;i<num_student;i++){
            count=1;
            /*
            while(i<num_student-1&&\
                    course[i][0]==course[i+1][0]&&\
                    course[i][1]==course[i+1][1]&&\
                    course[i][2]==course[i+1][2]&&\
                    course[i][3]==course[i+1][3]&&\
                    course[i][4]==course[i+1][4]){
                i++;
                count++;
            }
            if(count>max){
                max=count;
            }
            */
            /*
            for(j=i+1;j<num_student;j++){
                if(same(course,i,j,num_student)){
                    count++;
                }
            }
            */
        }
        printf("%d\n",max);
    }
    
}
//二維陣列cmp
