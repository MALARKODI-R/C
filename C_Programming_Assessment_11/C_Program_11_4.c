#include<stdio.h>
void memcopy(int *src,int *dst,int size);
int main(){
    int a[5]={1,2,3,4,5};
    int b[5];
    memcopy(a,b,5);
    for(int i=0;i<5;i++){
        printf("%d ",b[i]);
    }
}
void memcopy(int *src,int *dst,int size){
    for(int i=0;i<size;i++){
        *(dst+i)=*(src+i);
    }
}
