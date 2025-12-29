#include<stdio.h>
void intcon(int *src1,int size1,int *src2,int size2,int *dst){
    int i;
    for(i=0;i<size1;i++)
        dst[i]=src1[i];
    for(i=0;i<size2;i++)
        dst[size1+i]=src2[i];
}
int main(){
    int arr1[]={1,2,3};
    int arr2[]={4,5,6};
    int size1=3,size2=3;
    int result[6];
    intcon(arr1,size1,arr2,size2,result);
    for(int i=0;i<size1+size2;i++)
        printf("%d ",result[i]);
}
