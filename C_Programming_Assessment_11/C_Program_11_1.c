#include<stdio.h>
void array(void);
int main(){
array();
}
void array(void){
int y[5]={1,2,3,4,5};
int *x=y;
for(int i=0;i<5;i++){
    printf("%d ",*(x+i));
}
}
