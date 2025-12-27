#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    int carry=0,result=0,c=1;
    while(a>0||b>0||carry>0){
        int A=a%10;
        int B=b%10;
        int sum=A+B+carry;
        carry=sum/10;
        sum=sum%10;
        result+=sum*c;
        c*=10;
        a/=10;
        b/=10;
    }
    printf("Sum:%d",result);
}
