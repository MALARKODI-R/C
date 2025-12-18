#include<stdio.h>
int main(){
    int a,b=0;
for(a=1000;a<=9999;a++){
if((a%7)==0 && (a%9)==0){
b=a;
}
}printf("%d",b);
}
