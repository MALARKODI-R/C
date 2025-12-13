#include <stdio.h>
int main() {
    int x,y,z;
    printf("Enter a digit number: ");
    scanf("%d",&x);
    y=x%100;z=y%10;
    printf("%d",((100*(x/100))+(z-5)));
}
