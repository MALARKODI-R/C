#include<stdio.h>
int main(){
    int a,b,sum,count=0;
for(a=0;a<100000;a++){
    b=a;
    sum=0;
for(;b>0;b=b/10){
    sum=sum+(b%10);
}
if(sum==14){
count++;
}
}printf("%d",count);
}
