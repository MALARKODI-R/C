#include<stdio.h>
int main(){
    int a=0,b,sum,count=0;
while(a<100000){
    b=a;
    sum=0;
while(b>0){
    sum=sum+(b%10);
    b=b/10;
}
if(sum==14){
count++;
}a++;
}printf("%d",count);
}
