#include<stdio.h>
int disp_sum_all_digits(int);
int main(){
    int i,result;
printf("Enter a number: ");
scanf("%d",&i);
result=disp_sum_all_digits(i);
printf("%d\n",result);
return 0;
}
int disp_sum_all_digits(int i){
    int temp=i,p=1,last,first;
    last=i%10;
while(temp>10){
        temp=temp/10;
        p=p*10;
}first=temp;
return last*p+(i%p)/10*10+first;
}
