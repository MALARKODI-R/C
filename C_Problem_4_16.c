#include<stdio.h>
int main(){
	int a,b=0,i;
	printf("Enter a number: ");
	scanf("%d",&a);
	if(a<=1){
		printf("Not prime");
		return 0;
	}
	a=a%100;
	i=2;
check_divisor:
	if(i>a/2)goto end_check;
	if(a%i==0){
		b=1;
		goto end_check;
	}
	i=i+1;
	goto check_divisor;
end_check:
	if(b==0){
		printf("Prime");
	}else{
		printf("Not prime");
	}
}
