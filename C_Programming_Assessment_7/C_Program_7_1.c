#include<stdio.h>
void disp_assend(int);
int main(){
int x;
printf("Enter a number: ");
scanf("%d",&x);
disp_assend(x);
return 0;
}
void disp_assend(int a){
for(int i=5;i>=a;i--){
printf("%d\n",i);
}}
