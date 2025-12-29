#include<stdio.h>
int find_2digit_odd_sum7(int a[]);
int main(){
    int a[10];
    int n=find_2digit_odd_sum7(a);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int find_2digit_odd_sum7(int a[]){
int k=0;
for(int i=10;i<=99;i++){
    if(i%2!=0 && (i%10 + i/10)==7){
        a[k++]=i;
    }
}
return k;
}
