#include<stdio.h>
int disp_sum_all_digits(int);
int main(){
    int i,temp;
printf("Enter a number: ");
scanf("%d",&i);
temp=disp_sum_all_digits(i);
printf("%d\n",temp);
return 0;
}
int disp_sum_all_digits(int i){
    int rev=0;
while(i>0){
        rev=rev*10+(i%10);
         i=i/10;
}return rev;
}
