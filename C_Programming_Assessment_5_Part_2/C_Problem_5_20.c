#include<stdio.h>
int main(){
int b=0;
for(int i=1;i<=9/2;i++){
    if(i%i==0){
            b++;
    }
}printf("%d",b);
}
