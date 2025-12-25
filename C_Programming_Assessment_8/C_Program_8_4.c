#include<stdio.h>
int count_total_digits(int);
int main(){
    int i,count;
printf("Enter a number: ");
scanf("%d",&i);
count=count_total_digits(i);
printf("%d\n",count);
return 0;
}
int count_total_digits(int i){
    int count=0;
while(i>0){
         i=i/10;
         count++;
}return count;
}
