#include<stdio.h>
int memcomp(int *a,int *b,int size);
int main(){
    int x[5]={1,2,3,4,5};
    int y[5]={1,2,3,0,5};

    if(memcomp(x,y,5))
        printf("SUCCESS");
    else
        printf("FAILURE");
}
int memcomp(int *a,int *b,int size){
    for(int i=0;i<size;i++){
        if(*(a+i)!=*(b+i))
            return 0;
    }
}
