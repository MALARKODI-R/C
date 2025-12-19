#include<stdio.h>
int main(){
    int a=1000,b=0;
while(a<=9999){
if((a%7)==0 && (a%9)==0){
b=a;
}a++;
}printf("%d",b);
}
