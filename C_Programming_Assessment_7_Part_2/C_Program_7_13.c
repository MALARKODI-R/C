#include<stdio.h>
void disp_interchange_first_last_digits(void);
int main(){
disp_interchange_first_last_digits();
return 0;
}
disp_interchange_first_last_digits(void){
int i,temp,last,first,p=1;
printf("Enter a number: ");
scanf("%d",&i);
last=(i%10);
temp=i;
while(temp>=10){
         temp=temp/10;
         p=p*10;
}
first=temp;
printf("%d%d%d",last,(i%p)/10,first);
}

