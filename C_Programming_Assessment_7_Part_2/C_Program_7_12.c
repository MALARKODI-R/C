#include<stdio.h>
void disp_reverse_digits(void);
int main(){
disp_reverse_digits();
return 0;
}
disp_reverse_digits(void){
int i,temp;
printf("Enter a number: ");
scanf("%d",&i);
while(i>0){
        temp=(i%10);
         printf("%d",temp);
         i=i/10;
}
}
