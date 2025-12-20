#include<stdio.h>
void disp_odd(void);
int main(){
disp_odd();
return 0;
}
void disp_odd(void){
for(int i=10;i<=99;i++){
        if(i%2!=0 && (i%10)+(i/10)==7)
          printf("%d ",i);
}
}
