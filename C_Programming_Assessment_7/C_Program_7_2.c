#include<stdio.h>
void disp_sum(int);
int main(){
int x;
printf("Enter a number: ");
scanf("%d",&x);
disp_sum(x);
return 0;
}
void disp_sum(int a){
    int sum=0;
for(int i=1;i<=a;i++){
        sum=sum+i;
}printf("%d\n",sum);
}
